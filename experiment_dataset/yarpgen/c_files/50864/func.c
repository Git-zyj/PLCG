/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50864
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
    var_10 -= ((/* implicit */long long int) (+(max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) >= (var_5)))), ((+(((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            {
                arr_7 [i_0 + 1] [i_0] [i_1 - 2] &= ((/* implicit */short) max((((((/* implicit */_Bool) (+(1323879227)))) ? ((((_Bool)1) ? (5810974778306764034LL) : (((/* implicit */long long int) var_2)))) : (((arr_0 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)60))))))), (((/* implicit */long long int) (unsigned char)28))));
                var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1 - 3] [i_1])) & (max((-1541649250), (305526342)))))) ? ((+((+(((/* implicit */int) (signed char)46)))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) || (((/* implicit */_Bool) (short)5690)))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned int i_3 = 3; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned long long int) ((long long int) (((+(arr_3 [i_0]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-32759)) >= (((/* implicit */int) arr_9 [i_2] [i_1] [i_2 - 2] [i_2])))))))));
                            var_13 |= ((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) arr_6 [i_0 + 1] [i_0 + 1]))) * (max(((+(arr_0 [i_3]))), (((/* implicit */long long int) var_6))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 |= ((/* implicit */int) ((((/* implicit */long long int) var_2)) < ((+(((((/* implicit */_Bool) 14549249827557519426ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))) : (var_8)))))));
}
