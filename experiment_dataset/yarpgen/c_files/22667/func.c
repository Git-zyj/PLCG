/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22667
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
    var_14 = var_5;
    var_15 = ((/* implicit */long long int) max((((((((/* implicit */int) (short)16384)) < (((/* implicit */int) var_9)))) ? (((((/* implicit */_Bool) 4736744068977767219ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1001364855U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)2016))))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)4687)) / (((/* implicit */int) var_7))))) != (4517581705307241527LL))))));
    var_16 = ((/* implicit */unsigned int) min((var_2), (var_2)));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_6 [i_0 + 2] [i_1] [i_2] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((arr_0 [i_1] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? ((~(arr_5 [i_0] [i_1] [i_2] [i_0]))) : (((/* implicit */long long int) (~(arr_0 [i_0] [i_2]))))))));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0 - 1] [i_0])) ? ((-(((((/* implicit */_Bool) arr_1 [9] [i_0 + 2])) ? (arr_2 [i_2] [4] [i_0]) : (0LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [0U] [i_2]))))) ? (((((/* implicit */_Bool) (unsigned short)4698)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)4688)))) : (((((/* implicit */int) (signed char)(-127 - 1))) | (((/* implicit */int) (unsigned short)4669)))))))));
                    var_18 = ((/* implicit */unsigned short) (+(min((((/* implicit */long long int) ((unsigned short) 4294967295U))), (4517581705307241537LL)))));
                    var_19 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 11234644228407323798ULL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_1 [i_0 + 2] [0ULL]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16777184ULL)) ? (4279785516U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1 - 2])))))) : (((((/* implicit */_Bool) -8605189410609602341LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)5))) : (4590460666650303162ULL))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)19046)))))));
                }
            } 
        } 
    } 
}
