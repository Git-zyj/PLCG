/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239974
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
    var_14 = ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (-(var_5)))) ? ((+(arr_4 [i_0]))) : (((long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23768))))))));
                        arr_12 [(unsigned char)8] [i_2] [i_3] |= ((/* implicit */_Bool) (+((-(((/* implicit */int) (signed char)28))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        arr_17 [i_0] [i_1] [i_1] [i_0] [i_1] [i_4] = (!(((/* implicit */_Bool) var_11)));
                        var_16 -= ((/* implicit */unsigned long long int) var_8);
                        arr_18 [i_4] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_1))) / (((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_0])))))) ? ((-(var_6))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned char)11])))));
                    }
                }
                for (short i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
                {
                    arr_22 [i_0] [i_1] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (unsigned short)50479)) ? (((/* implicit */int) (short)32760)) : (((/* implicit */int) var_2))))))));
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) ((unsigned short) var_2)))) ? (((((/* implicit */_Bool) var_8)) ? (arr_7 [i_1] [i_1] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24598))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                }
                arr_23 [i_1] [i_0] [i_1] = ((/* implicit */long long int) -36522483);
                var_18 = ((/* implicit */int) ((unsigned short) -6543954108272194178LL));
                var_19 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned short)41767)) ? (-1240716347) : (-36522483)))));
                arr_24 [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) var_9));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        for (short i_7 = 4; i_7 < 17; i_7 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_8 = 0; i_8 < 19; i_8 += 3) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (long long int i_10 = 4; i_10 < 16; i_10 += 3) 
                        {
                            {
                                arr_37 [i_6] [10] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */long long int) arr_29 [16] [i_7 + 1] [(signed char)12])) : (-6856703665551347019LL)));
                                var_20 = ((/* implicit */unsigned long long int) (short)0);
                            }
                        } 
                    } 
                } 
                arr_38 [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) 4194272)) : (var_12))))))));
                var_21 |= ((/* implicit */unsigned long long int) max((arr_33 [i_7 - 4]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((unsigned short) (unsigned short)23775))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-119)) && (((/* implicit */_Bool) arr_30 [(unsigned short)2] [i_7 - 2] [i_7] [i_7 - 2]))))))))));
                /* LoopNest 3 */
                for (long long int i_11 = 0; i_11 < 19; i_11 += 3) 
                {
                    for (unsigned char i_12 = 0; i_12 < 19; i_12 += 4) 
                    {
                        for (int i_13 = 0; i_13 < 19; i_13 += 1) 
                        {
                            {
                                arr_46 [i_6] [i_6] [i_6] [i_6] [i_12] [i_13] [i_13] = ((/* implicit */int) var_13);
                                arr_47 [i_6] [i_6] [i_7] [i_7] [i_6] [i_12] [i_13] = ((/* implicit */long long int) ((short) (+(((/* implicit */int) var_4)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */short) var_4);
    var_23 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) (short)4275)) : ((+(((/* implicit */int) var_4))))));
}
