/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246365
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 233592768)) ? ((+(-4))) : (((((/* implicit */_Bool) 1032357079)) ? (((/* implicit */int) (unsigned char)74)) : (6)))))) ? ((-((-(1870419850))))) : ((-(((/* implicit */int) ((unsigned char) arr_4 [i_0] [(signed char)9] [i_1]))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((int) (unsigned char)22))) + (((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */unsigned long long int) -854361535)) : (15133598345183892810ULL)))))) ? (((((((/* implicit */int) (unsigned char)22)) == (((/* implicit */int) (unsigned char)254)))) ? (((unsigned int) (unsigned char)233)) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_2 [(_Bool)1] [i_0]) : (((/* implicit */unsigned int) 854361534)))))) : (arr_1 [i_1])));
                arr_6 [(signed char)1] = (+((~(arr_3 [i_0]))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    arr_10 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 295618469)) ? (-1528473473) : (((/* implicit */int) (_Bool)1)))), (var_10)));
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((int) ((((/* implicit */long long int) ((1015808U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) == (((long long int) -1187209772052706833LL))))))));
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) min((((/* implicit */unsigned int) arr_7 [10U] [10U] [10U] [10U])), (max((arr_1 [i_1]), (((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_2])))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_17 [i_1] [i_3] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [(unsigned char)1] [(unsigned char)1] [(unsigned char)1] [(unsigned char)1] [i_4] [i_4] [i_4]))));
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_15 [3] [i_1] [i_2] [16] [i_4] [3] [(signed char)5]))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) max((var_7), (arr_0 [i_0])));
                }
                arr_18 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_16 [4] [i_1] [i_1] [i_0])), (((((/* implicit */_Bool) (unsigned char)44)) ? (var_9) : (arr_14 [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */int) ((unsigned char) var_13))) : ((~(((/* implicit */int) arr_0 [i_1]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_6)))) ? (var_1) : (((((/* implicit */_Bool) var_10)) ? (var_13) : ((~(((/* implicit */int) (signed char)-76))))))));
}
