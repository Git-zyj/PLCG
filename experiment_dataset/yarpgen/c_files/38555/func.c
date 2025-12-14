/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38555
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_11 += ((/* implicit */unsigned int) (((+(((/* implicit */int) (signed char)-1)))) <= ((~(((/* implicit */int) arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_9 [(short)4] [1LL] [(unsigned char)2] = ((/* implicit */unsigned short) (signed char)-5);
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1 - 2])) >> (((max((((/* implicit */unsigned int) var_9)), (var_7))) - (4294944457U)))))) ? (((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 - 2])) ? ((~(arr_3 [i_0] [i_1]))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_2]))))))) : (arr_3 [i_0] [i_0])));
                    var_12 *= ((/* implicit */unsigned char) arr_2 [(unsigned short)9]);
                }
            } 
        } 
    }
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */int) min((var_13), ((((~(((/* implicit */int) arr_12 [i_3])))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_3])))))))));
        var_14 = ((/* implicit */signed char) (((~(arr_2 [i_3]))) >> (((((int) arr_11 [i_3])) - (81)))));
    }
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
    {
        arr_17 [i_4] = ((/* implicit */signed char) arr_14 [i_4]);
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            for (int i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                {
                    arr_22 [(unsigned short)10] [(unsigned short)10] [(unsigned short)10] [(short)3] = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned short) arr_21 [i_4] [i_5] [i_6] [(unsigned short)0]))), (min((((/* implicit */int) (signed char)-2)), (-413327162)))));
                    var_15 -= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_18 [i_5] [i_5])))) - (min((min((((/* implicit */unsigned int) arr_20 [i_4] [i_4] [(unsigned char)10])), (arr_14 [i_6]))), (4294967287U)))));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >> (((((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (max((3215622696U), (((/* implicit */unsigned int) (signed char)56)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)19610)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))))) - (3215622685U)))));
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
        {
            {
                var_17 = max((arr_24 [i_7] [i_7]), (((/* implicit */int) arr_28 [i_7])));
                var_18 = ((/* implicit */unsigned short) -1884565414);
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 24; i_9 += 3) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_11 = 4; i_11 < 21; i_11 += 2) 
                            {
                                var_19 = max((min((((/* implicit */int) var_3)), ((+(arr_29 [i_8] [i_8] [i_11]))))), (max(((-(arr_24 [(unsigned short)23] [(unsigned short)23]))), (((/* implicit */int) ((((/* implicit */int) arr_23 [i_7])) <= (var_2)))))));
                                var_20 *= ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_7] [i_7])) - (((/* implicit */int) (signed char)-77))))), (var_4))), (((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_24 [(signed char)4] [(signed char)4])) ? (arr_30 [i_7] [i_7] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
                                var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_28 [20]))));
                                var_22 = ((/* implicit */_Bool) 1884565416);
                            }
                            arr_36 [2U] [i_8] [(unsigned short)12] [(unsigned char)16] [i_8] = ((/* implicit */signed char) (unsigned short)37654);
                            var_23 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_25 [i_8])), (1884565425)));
                        }
                    } 
                } 
                arr_37 [i_8] [(signed char)8] = ((/* implicit */short) arr_35 [i_8] [10] [i_8] [(unsigned char)8] [i_7] [i_7] [i_8]);
                arr_38 [i_8] [(unsigned char)15] [i_8] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_34 [5ULL] [i_8] [i_7] [i_7] [i_7] [i_7])), (((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-104))) <= (var_7))) ? (((/* implicit */int) arr_25 [i_8])) : (((/* implicit */int) ((signed char) var_7)))))));
            }
        } 
    } 
}
