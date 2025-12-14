/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38855
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
    var_15 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((int) 13));
        arr_4 [i_0] = ((long long int) arr_2 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (signed char)32))) ? (((var_12) - (-28))) : (min((((int) var_7)), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) <= (795013288U))))))));
        var_16 ^= ((/* implicit */int) (unsigned char)173);
    }
    for (short i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        arr_11 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_8 [i_2]), (arr_8 [i_2])))) ? (arr_10 [i_2]) : ((-2147483647 - 1))));
        arr_12 [i_2] = ((((((/* implicit */unsigned long long int) (+(var_4)))) == (min((((/* implicit */unsigned long long int) -3419298204197381075LL)), (18327827769721679775ULL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_9 [i_2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (max((max((arr_9 [i_2]), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)161)) < (((/* implicit */int) (unsigned char)114))))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        arr_15 [i_3] [i_3] = ((/* implicit */short) ((long long int) 1606126020U));
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_2)) ? (arr_8 [i_3]) : (arr_8 [i_3]))));
        arr_17 [i_3] = ((/* implicit */short) var_12);
        arr_18 [i_3] = arr_14 [i_3];
    }
    var_17 = ((/* implicit */long long int) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
    {
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            {
                var_18 *= ((/* implicit */unsigned int) min((max((((/* implicit */long long int) (unsigned short)16440)), (1696292228022890285LL))), (max((3419298204197381069LL), (((/* implicit */long long int) 1311806840))))));
                arr_24 [i_4] [i_5] = (!(((/* implicit */_Bool) 16784004470414293121ULL)));
            }
        } 
    } 
}
