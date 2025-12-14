/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219207
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
    var_10 = ((/* implicit */signed char) (+(min((max((var_9), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) var_2))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)1))));
                var_11 += ((/* implicit */short) (-((-(((/* implicit */int) ((unsigned short) (signed char)1)))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (signed char i_2 = 1; i_2 < 13; i_2 += 2) 
    {
        var_12 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [(unsigned short)4] [(unsigned short)4])) >> ((((~((~(((/* implicit */int) arr_11 [(signed char)6])))))) - (47)))));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)253))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_2])) + (((/* implicit */int) arr_10 [i_2] [i_2 + 4]))))) : (min((((/* implicit */unsigned long long int) arr_10 [i_2] [7ULL])), (var_7)))))) ? (((/* implicit */int) ((_Bool) arr_9 [i_2 + 2]))) : (((/* implicit */int) arr_9 [i_2 + 3]))));
    }
    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) (((+(((/* implicit */int) (short)0)))) << (((((/* implicit */int) (unsigned char)254)) - (227)))));
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) arr_12 [i_3] [i_3]))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_4] [i_4])))))));
        var_17 ^= ((/* implicit */unsigned int) var_0);
        var_18 = ((/* implicit */unsigned long long int) min(((short)-32763), (((/* implicit */short) (unsigned char)254))));
    }
    for (unsigned short i_5 = 3; i_5 < 21; i_5 += 1) 
    {
        arr_21 [i_5] [i_5 + 1] = ((/* implicit */_Bool) min((-1), (1037008661)));
        var_19 |= ((/* implicit */signed char) max((((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (unsigned short)16380)) ? (-1823031692380079251LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))), (arr_18 [i_5] [i_5])));
        arr_22 [i_5] = ((/* implicit */unsigned short) max((((((((/* implicit */int) var_2)) << (((((/* implicit */int) (unsigned short)65535)) - (65524))))) + ((+(((/* implicit */int) arr_17 [i_5 + 1])))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) <= (((unsigned int) arr_17 [i_5])))))));
    }
}
