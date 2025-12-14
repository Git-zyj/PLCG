/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221722
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
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((unsigned long long int) ((((/* implicit */_Bool) 14504183246230494576ULL)) ? (((/* implicit */unsigned long long int) 143552238122434560LL)) : (17622397479467352742ULL)))) == (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)42387)))), (7375639835318374767ULL))))))));
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (!(((/* implicit */_Bool) (((+(var_1))) | (((/* implicit */unsigned long long int) 1908134340))))))))));
                }
                arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_0 [i_0])))))) == (((unsigned long long int) (+(var_3))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)255)))))));
}
