/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51473
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)22304))) / (-6062084745807189770LL))))));
        arr_2 [i_0] = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) -19LL)), (((var_9) * (((/* implicit */unsigned long long int) 251658240)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0]), ((signed char)-39)))))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [i_1] [i_2 + 1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [(signed char)4] [i_1]))))) ? (((/* implicit */long long int) 1093454832)) : (((((/* implicit */_Bool) (unsigned short)43231)) ? (((/* implicit */long long int) ((/* implicit */int) (short)15000))) : (5005438379733105830LL))))) >> (((((/* implicit */int) arr_4 [i_0] [i_1 - 1])) ^ (((/* implicit */int) arr_4 [i_0] [i_2]))))));
                    arr_10 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_0])) ? (((/* implicit */int) (signed char)4)) : (max((15), (((/* implicit */int) arr_8 [i_1] [i_1 - 2] [i_1] [i_1 - 2])))))) <= (((((/* implicit */_Bool) 1319258521U)) ? (((/* implicit */int) arr_0 [i_2 + 1])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (5005438379733105818LL))))))));
                    var_21 = ((/* implicit */int) ((((_Bool) ((((/* implicit */_Bool) (signed char)12)) ? (arr_3 [(unsigned short)0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 6596234373644319580LL))))) > (((/* implicit */int) (_Bool)1)))))) : ((+(max((8796076244992LL), (((/* implicit */long long int) (_Bool)1))))))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */signed char) (-(min((((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */int) (unsigned short)43242)) : (((/* implicit */int) (unsigned short)43316)))), ((+(-251658241)))))));
        var_22 += ((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
    }
    var_23 = ((/* implicit */unsigned int) (signed char)-100);
}
