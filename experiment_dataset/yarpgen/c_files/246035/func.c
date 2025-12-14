/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246035
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_3]))))) ? (((((/* implicit */_Bool) arr_4 [(unsigned char)10] [i_1])) ? (((((/* implicit */_Bool) (unsigned char)48)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [3U] [i_4])) / (((/* implicit */int) (unsigned char)254))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) arr_3 [(unsigned short)6])) : (((/* implicit */int) arr_3 [i_2]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 7236630854728035508LL)) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) (unsigned char)9))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) / (6904618209744368574LL))))))))));
                                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) max((((((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) arr_15 [i_0] [i_0] [4] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_1 [i_2])) : (((int) 1594430422U)))), (((/* implicit */int) ((unsigned char) (unsigned char)254))))))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_1]) / (arr_4 [i_0] [i_1])))) && (((/* implicit */_Bool) ((short) arr_15 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0] [i_0])))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    for (unsigned char i_6 = 2; i_6 < 11; i_6 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) max((-3566558240131980649LL), (((/* implicit */long long int) max(((unsigned char)1), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)9006)) != (((/* implicit */int) (unsigned char)2))))))))));
                            var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((1612015836) > (((/* implicit */int) arr_15 [i_0] [i_1] [i_5] [i_5] [i_6] [9ULL] [(unsigned short)5]))))) % (((((/* implicit */int) arr_15 [i_6] [i_6 + 1] [i_5] [i_1] [i_0] [i_0] [i_0])) * (((/* implicit */int) (unsigned char)255))))))), (((min((((/* implicit */unsigned long long int) var_9)), (var_0))) - (((/* implicit */unsigned long long int) ((int) var_7)))))));
                            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 8696550457646970942ULL)) || (((/* implicit */_Bool) arr_1 [i_6])))))) || (((/* implicit */_Bool) max(((unsigned char)46), ((unsigned char)0))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((((var_2) % (((/* implicit */unsigned long long int) 1612015836)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (unsigned short)28904)))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) var_6)) : (var_8))) != (((/* implicit */long long int) ((int) (unsigned char)3)))))))));
}
