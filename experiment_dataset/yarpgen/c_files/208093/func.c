/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208093
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)121)) <= (-522228995)));
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_0 + 1])) >= (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) / (var_0))) / (((/* implicit */unsigned long long int) -1267183964597818224LL))))));
    }
    var_13 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */int) var_8)), (-1417440734)))) ? (((/* implicit */int) ((1417440706) >= (((/* implicit */int) var_5))))) : (var_4))) % (((/* implicit */int) var_5))));
    var_14 = ((/* implicit */short) (~(((/* implicit */int) min((((/* implicit */short) ((((/* implicit */unsigned long long int) var_1)) >= (var_3)))), (var_5))))));
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            {
                var_15 &= ((/* implicit */unsigned char) var_8);
                arr_8 [i_1] [i_1] = ((/* implicit */int) max((var_3), (((/* implicit */unsigned long long int) (-(arr_1 [i_1] [i_2]))))));
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_2] [i_4])) ? ((((_Bool)1) ? (2768339285561535527ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1]))))))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_9)) - (((/* implicit */int) arr_11 [i_1] [(unsigned char)1] [(unsigned char)1] [(unsigned char)6] [0U] [i_4]))))))) ? (((/* implicit */long long int) (+((-(arr_12 [i_1])))))) : (min((((/* implicit */long long int) var_1)), (arr_10 [i_1] [10LL] [1U])))));
                            arr_13 [i_1] [(unsigned char)5] [8] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (short)9695)) || ((!(((/* implicit */_Bool) arr_11 [i_4] [8ULL] [i_3] [i_2] [i_1] [8ULL]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)121)) == (((/* implicit */int) var_5)))) ? (((var_0) << (((((/* implicit */int) var_2)) - (94))))) : (((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))) ? ((-(max((-1267183964597818224LL), (((/* implicit */long long int) var_2)))))) : (-1267183964597818229LL)));
}
