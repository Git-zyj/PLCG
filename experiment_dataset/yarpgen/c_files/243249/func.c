/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243249
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) max((((2147483647) <= (((/* implicit */int) (unsigned short)1023)))), (((((/* implicit */long long int) 1391255194)) <= (-2432617267953610218LL)))));
                /* LoopSeq 2 */
                for (short i_2 = 2; i_2 < 16; i_2 += 3) 
                {
                    arr_10 [i_0] [i_1 - 2] [i_2 + 1] [i_2 - 1] = ((/* implicit */long long int) (((+(min((1391255194), (((/* implicit */int) (unsigned char)73)))))) - ((+(((/* implicit */int) (unsigned char)26))))));
                    arr_11 [i_0] [i_1 - 2] [i_0] [i_0] |= ((/* implicit */_Bool) ((max(((!((_Bool)1))), ((!(((/* implicit */_Bool) (unsigned char)63)))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) 3085986513U)) && (((/* implicit */_Bool) (unsigned char)230))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) 1391255180)) && (((/* implicit */_Bool) 2147483647)))) && (((/* implicit */_Bool) (unsigned char)26)))))));
                    arr_12 [i_2] = ((/* implicit */unsigned long long int) 2147483647);
                }
                for (unsigned long long int i_3 = 3; i_3 < 15; i_3 += 1) 
                {
                    arr_15 [i_0] [i_1] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) 2147483647)) <= (0ULL))))));
                    arr_16 [i_1 - 1] [i_1] [i_1] [i_1] &= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) -7185667708299920617LL)) & (18446744073709551614ULL))) == (((max((10903596029225643737ULL), (((/* implicit */unsigned long long int) (signed char)127)))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)22)) + (((/* implicit */int) (short)-23524)))))))));
                }
                arr_17 [(signed char)2] [i_1] = ((/* implicit */int) max((min(((+(13728589660012485082ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32767)) == (((/* implicit */int) (unsigned char)245))))))), (((/* implicit */unsigned long long int) ((-7185667708299920623LL) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)243)))))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((((/* implicit */int) (unsigned char)243)) == (((/* implicit */int) (unsigned char)255)))))))));
}
