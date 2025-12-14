/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212335
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
    var_10 = ((/* implicit */short) var_6);
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) -1221939449)) ? (11862511207992595558ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) min((-1839811250779235102LL), ((-9223372036854775807LL - 1LL)))))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_12 *= ((/* implicit */unsigned int) max((((max((((/* implicit */long long int) -1708235067)), (-1LL))) + (min((10LL), (((/* implicit */long long int) (unsigned short)0)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 1708235074)))))));
                                var_13 = ((short) (!(((/* implicit */_Bool) -1192035318))));
                                var_14 ^= ((/* implicit */int) ((((((/* implicit */int) (unsigned short)24321)) > (((/* implicit */int) ((9269301798993895294ULL) < (((/* implicit */unsigned long long int) -1221939449))))))) ? (max((-11LL), (((/* implicit */long long int) (unsigned short)41215)))) : (-381011338589060971LL)));
                                arr_12 [i_0] [i_3] [0] [i_2 + 1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)41214);
                                arr_13 [i_0] [i_0] [12LL] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max((1708235066), (163000463))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned short)17)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65520))) : (5578616459021200998LL)))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) var_8))));
}
