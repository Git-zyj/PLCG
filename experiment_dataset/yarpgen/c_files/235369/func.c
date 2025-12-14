/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235369
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
    var_17 = ((/* implicit */long long int) min((((/* implicit */short) (_Bool)1)), ((short)-1)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min((((/* implicit */signed char) (_Bool)1)), (min(((signed char)-34), ((signed char)32)))))), (min((min((((/* implicit */unsigned int) (signed char)11)), (3941482015U))), (((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)1))))))));
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) min((((/* implicit */unsigned char) (signed char)32)), ((unsigned char)255))))));
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) min((((/* implicit */unsigned int) min((((/* implicit */short) min(((signed char)38), ((signed char)64)))), ((short)27080)))), (min((397564192U), (((/* implicit */unsigned int) (unsigned short)16)))))))));
                    var_21 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) 2689988372U)), (13514081196168275873ULL))), (((/* implicit */unsigned long long int) min(((unsigned short)10728), (((/* implicit */unsigned short) (signed char)-38)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) min((min((min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)10719))), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) (signed char)-27))));
}
