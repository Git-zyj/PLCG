/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228983
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_6 [i_1] [i_1] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1])) ? (((/* implicit */unsigned int) max((arr_1 [i_0]), (((/* implicit */int) var_8))))) : (var_4)))) ? ((+(((((/* implicit */_Bool) var_1)) ? (arr_1 [i_0]) : (((/* implicit */int) (unsigned short)57209)))))) : (-1557808915)));
                    var_12 = ((/* implicit */_Bool) arr_2 [i_2] [i_1 + 1] [1]);
                    var_13 += ((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_1]);
                    arr_7 [i_0] [i_2] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_0 [i_0] [i_0])))));
                }
            } 
        } 
        var_14 += ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) arr_5 [i_0] [i_0])) & (((/* implicit */int) (unsigned short)59990)))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_15 += ((/* implicit */unsigned long long int) var_7);
        arr_10 [i_3] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) arr_8 [i_3])))));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((int) arr_8 [0])))));
        arr_11 [i_3] [i_3] = min(((!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_3])) * (((/* implicit */int) (unsigned short)5572))))))), ((!(((/* implicit */_Bool) arr_5 [i_3] [i_3])))));
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    {
                        arr_21 [i_5] [i_3] [i_5] [i_6] [i_5] [i_3] = ((/* implicit */unsigned long long int) (+((+(arr_1 [i_6])))));
                        /* LoopSeq 4 */
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            arr_25 [i_3] [i_3] [i_7] [i_3] [i_7] [i_4] = ((/* implicit */unsigned char) var_4);
                            arr_26 [i_7] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_13 [i_3]), (arr_13 [i_3])))) == (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_7 - 1] [i_4])) : (((/* implicit */int) var_2))))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
                        {
                            arr_29 [i_3] [i_3] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_19 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])), (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) >= (arr_22 [i_3] [i_5] [(_Bool)1] [(_Bool)1] [i_3])))) << (((/* implicit */int) arr_18 [i_8] [i_4] [i_5] [i_4]))))));
                            arr_30 [i_3] [i_4] [i_3] [i_3] [i_8] = (+(((/* implicit */int) ((signed char) arr_9 [i_6] [i_3]))));
                            arr_31 [i_3] [i_3] [i_6] [i_6] [i_4] [i_6] [i_3] = ((/* implicit */_Bool) (unsigned short)60016);
                        }
                        for (unsigned char i_9 = 0; i_9 < 15; i_9 += 3) /* same iter space */
                        {
                            arr_35 [i_3] = ((/* implicit */int) ((unsigned short) ((unsigned int) (+(arr_14 [i_3])))));
                            arr_36 [i_3] [i_4] [i_3] [i_6] [i_5] [i_4] = ((/* implicit */unsigned int) 281472829227008ULL);
                            var_17 = ((/* implicit */signed char) max((((/* implicit */int) arr_13 [i_3])), (max((((var_8) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)))), (((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_5)))))))));
                            arr_37 [i_3] [i_5] [i_5] [i_3] [i_9] [i_3] |= ((/* implicit */_Bool) (~(-1954422592)));
                        }
                        for (unsigned int i_10 = 2; i_10 < 12; i_10 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_10 - 2] [7U] [i_5] [i_6])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)77))))))) ? (((arr_38 [i_3] [i_4] [i_10 + 2] [i_10] [i_6] [i_3]) % (arr_38 [i_3] [i_4] [i_10 + 2] [i_6] [i_5] [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1222503441U)) || (((/* implicit */_Bool) arr_33 [i_3] [i_5] [2U] [2U] [i_10 - 2])))))))))));
                            var_19 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)77))))), (min((var_10), (((/* implicit */unsigned int) var_8))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_8 [i_5])) < (((/* implicit */int) arr_8 [i_6]))))) : (((((/* implicit */int) arr_5 [i_10] [i_10 + 1])) >> (((((var_1) * (4294967290U))) - (1095949683U)))))));
                            arr_40 [i_3] [i_4] [i_3] [i_3] [i_3] [i_6] = var_9;
                            var_20 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) 2517135722U)))) ? (((unsigned long long int) -1439940978)) : (((/* implicit */unsigned long long int) ((unsigned int) arr_9 [i_3] [i_5]))))))));
                            arr_41 [i_3] [i_3] [i_3] [i_3] [i_10 - 1] [i_3] = var_7;
                        }
                    }
                } 
            } 
        } 
    }
    var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_1) : (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (var_0)))))) && (((/* implicit */_Bool) min(((+(((/* implicit */int) var_5)))), (((/* implicit */int) ((((/* implicit */_Bool) -605636823)) && (((/* implicit */_Bool) (signed char)102))))))))));
    var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (unsigned short)60001))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_0))) % (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
}
