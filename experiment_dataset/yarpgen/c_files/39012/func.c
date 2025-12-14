/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39012
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
    var_12 = ((/* implicit */unsigned short) var_0);
    var_13 = ((/* implicit */int) ((14193263967402179103ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 7; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (unsigned short)58572)))) ? (((var_9) ^ (((/* implicit */int) var_1)))) : (((/* implicit */int) (unsigned char)21))))) != (max((var_3), (((/* implicit */unsigned int) (~(((/* implicit */int) var_5)))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned char)22)) / ((-(((/* implicit */int) var_4))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                var_16 |= ((/* implicit */unsigned int) min((((min((((/* implicit */unsigned long long int) (unsigned char)0)), (7325185051078628733ULL))) + (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))) / (var_2))))));
                /* LoopNest 2 */
                for (unsigned char i_3 = 1; i_3 < 9; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        {
                            var_17 -= ((/* implicit */unsigned int) ((((/* implicit */int) (!(var_7)))) ^ (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)255))))), (var_1))))));
                            var_18 = ((/* implicit */_Bool) max((((unsigned char) min((((/* implicit */unsigned short) var_11)), ((unsigned short)19043)))), (((/* implicit */unsigned char) var_4))));
                            arr_15 [i_3] [i_0 + 3] [i_0] [i_0] [i_0] [i_0] = (+(max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (short)-16220)))))));
                            var_19 -= ((/* implicit */short) min((((((/* implicit */_Bool) var_9)) ? (((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (3298909531304012000ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_5)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1)))))));
                        }
                    } 
                } 
                arr_16 [i_2 - 1] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) ((4160810217U) % (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (min((((/* implicit */unsigned int) (unsigned short)40739)), (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [4U] [i_2] [i_0] [i_0 + 1] [i_2]))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 8202413865741573569ULL))))));
            }
        }
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(134157078U))) ^ (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16219))) : (var_3)))))) && (((/* implicit */_Bool) ((unsigned int) var_9)))));
    }
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_7))));
    var_22 -= (+((-(((((/* implicit */_Bool) 268435440U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_0))))));
}
