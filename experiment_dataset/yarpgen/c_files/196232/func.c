/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196232
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    var_13 -= ((((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 714541739)))))))) ^ ((-(8191LL))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [(_Bool)1] [i_1] [(short)0] [i_3 - 1])) ? (((/* implicit */unsigned long long int) arr_11 [i_3] [i_0])) : (3266265115270770571ULL)))) ? ((~(15180478958438781044ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3] [i_2 + 1] [i_0] [i_0]))) | (-8184LL))))));
                        arr_13 [i_0] [i_1 + 1] [i_0] [i_3] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (_Bool)1))))));
                    }
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) (short)-1))))), (max((((/* implicit */short) arr_0 [(signed char)7])), ((short)-10453))))))) | ((~(((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (arr_2 [i_0 - 2]) : (((/* implicit */long long int) arr_11 [i_0] [i_2]))))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 22; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                        {
                            {
                                var_16 ^= max((((/* implicit */long long int) (signed char)-120)), (-9223372036854775781LL));
                                var_17 &= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_12 [(short)3] [(short)3] [(short)3] [i_4 - 1])) : (((/* implicit */int) (signed char)-41)))) : ((-(((/* implicit */int) (signed char)114))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */_Bool) -8169LL);
                }
            } 
        } 
    } 
    var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((+(-8780218911041775942LL)))))) ? (((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : ((~(707692305U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1)))))));
    var_20 = ((/* implicit */unsigned short) (-((+((((_Bool)1) ? (8666617791507425940LL) : (((/* implicit */long long int) 2139541189))))))));
    var_21 = ((/* implicit */short) (+(((/* implicit */int) var_10))));
}
