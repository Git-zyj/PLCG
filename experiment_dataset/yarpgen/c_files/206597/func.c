/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206597
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    var_16 = ((/* implicit */unsigned int) ((short) ((unsigned long long int) var_13)));
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (~(((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) == (6798521253610210236LL)))) - (((/* implicit */int) (unsigned short)11514)))))))));
                }
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [18ULL])) != ((-(((/* implicit */int) (!(arr_2 [(unsigned char)11]))))))));
                    var_19 = ((/* implicit */_Bool) var_13);
                }
                var_20 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((signed char) max((6798521253610210236LL), (((/* implicit */long long int) var_3)))))), (-6798521253610210236LL)));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (_Bool)1))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) var_6);
}
