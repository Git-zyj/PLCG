/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22558
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (var_10) : (max((var_10), (((/* implicit */unsigned long long int) (signed char)25))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) (short)-5327))))), (((short) (unsigned short)19168)))))) : (var_12)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (short)255);
        arr_4 [i_0] = (!((!(arr_2 [i_0]))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_6) ? (min((arr_0 [i_0] [(_Bool)1]), (arr_0 [i_0] [i_0]))) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) >= (((arr_2 [i_0]) ? (var_12) : (var_7))))))));
        var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((min(((short)13350), (var_16))), ((short)-12285))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_5);
                    arr_12 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0]))));
                    arr_13 [(short)5] [i_0] [(short)5] = ((/* implicit */unsigned int) var_7);
                    arr_14 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)6);
                    var_19 ^= arr_1 [i_0];
                }
            } 
        } 
    }
    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
        {
            var_20 *= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 182893901807403162ULL)))) ? (((unsigned int) ((short) (_Bool)1))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_17 [(unsigned short)2] [7] [4]))))));
            var_21 -= ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_3] [i_3]))));
            arr_19 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_17 [i_3] [i_3] [i_4])), (arr_15 [i_3])))) ? (((((/* implicit */_Bool) 2147483647)) ? (((((/* implicit */_Bool) arr_18 [i_4] [i_4] [4LL])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)136))) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) : (((/* implicit */long long int) arr_15 [i_3]))));
        }
        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
        {
            var_22 ^= ((/* implicit */unsigned short) (_Bool)1);
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_3] [i_3] [i_5]))))))) & (((/* implicit */int) ((arr_15 [i_3]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_3] [i_3] [i_3])))))))))));
        }
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) arr_18 [i_3] [i_3] [i_3]))));
        arr_22 [i_3] [i_3] = ((/* implicit */int) arr_16 [i_3] [i_3]);
    }
    var_25 -= ((/* implicit */unsigned int) var_13);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_7 = 3; i_7 < 21; i_7 += 2) 
        {
            for (int i_8 = 0; i_8 < 23; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 3; i_9 < 20; i_9 += 1) 
                {
                    {
                        var_26 -= ((/* implicit */unsigned long long int) var_0);
                        /* LoopSeq 1 */
                        for (long long int i_10 = 3; i_10 < 22; i_10 += 4) 
                        {
                            var_27 = arr_31 [(unsigned char)12] [i_7 - 1] [i_7];
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (-(((/* implicit */int) arr_26 [i_10 + 1])))))));
                            arr_36 [i_10] = ((/* implicit */long long int) (unsigned char)240);
                            var_29 = arr_35 [i_10];
                        }
                    }
                } 
            } 
        } 
        arr_37 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) 18263850171902148453ULL))) <= (((/* implicit */int) ((((/* implicit */int) arr_28 [i_6] [7U] [(unsigned char)18])) > (((/* implicit */int) arr_35 [i_6])))))));
    }
    for (short i_11 = 1; i_11 < 14; i_11 += 1) 
    {
        var_30 = ((/* implicit */short) min((arr_21 [i_11] [i_11] [(unsigned short)3]), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) > (var_10))))));
        var_31 = ((/* implicit */unsigned long long int) (!((!((!(((/* implicit */_Bool) 18446744073709551615ULL))))))));
    }
}
