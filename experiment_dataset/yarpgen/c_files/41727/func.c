/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41727
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
    var_20 -= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned char) (signed char)-32))))))))));
    var_21 = ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [(_Bool)1] = arr_1 [i_0];
        var_22 += ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)31)), (var_13)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (signed char)-32))))) ? (1410573839842932879LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)39)) >= (((/* implicit */int) (signed char)32)))))))) : (((/* implicit */long long int) ((/* implicit */int) min(((signed char)32), (((/* implicit */signed char) (_Bool)0))))))));
        var_23 = ((/* implicit */unsigned short) var_18);
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 19; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                {
                    arr_11 [i_1] [i_2] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */unsigned int) arr_9 [i_1] [i_1] [i_3])), (1392816855U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1)))))) ? (((/* implicit */long long int) max((((((/* implicit */int) (signed char)46)) - (var_19))), (((/* implicit */int) arr_8 [i_1] [i_1] [i_1]))))) : (((var_1) + (((/* implicit */long long int) ((((/* implicit */int) (signed char)-32)) + (arr_4 [i_1])))))));
                    arr_12 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */short) (((-(((/* implicit */int) arr_10 [i_2])))) > (((/* implicit */int) arr_9 [i_1] [i_2] [i_3]))));
                    arr_13 [i_1] = ((/* implicit */signed char) (((+(187066675336725957LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_18)))))))));
                }
            } 
        } 
        var_24 |= ((/* implicit */long long int) 4128768);
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) max((var_18), (arr_10 [i_1]))))))))));
        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (~(((/* implicit */int) min(((signed char)6), ((signed char)-46)))))))));
    }
    var_27 = ((/* implicit */unsigned int) var_11);
}
