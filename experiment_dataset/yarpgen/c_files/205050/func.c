/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205050
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
    var_12 = max((((/* implicit */unsigned long long int) (unsigned short)58549)), ((~(13232195075930075445ULL))));
    var_13 = ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) (unsigned short)4808);
                var_15 = ((/* implicit */unsigned char) (unsigned short)23910);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) ((unsigned short) (unsigned short)10775))) >= (((((/* implicit */int) (unsigned short)62066)) + (((/* implicit */int) arr_0 [i_0] [i_2])))))))));
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)255)) != (((/* implicit */int) (unsigned short)53643))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_1] = arr_7 [i_1] [i_0] [i_0];
            }
        } 
    } 
}
