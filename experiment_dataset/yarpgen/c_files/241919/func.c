/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241919
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)8184))))) ? ((+(((((/* implicit */_Bool) -3159296682413190566LL)) ? (((/* implicit */int) (short)-13845)) : (((/* implicit */int) (short)13851)))))) : (((((/* implicit */_Bool) (short)-13845)) ? (((/* implicit */int) (short)-13851)) : (((/* implicit */int) (unsigned short)33994))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) 18263521631967922988ULL)) ? (18263521631967922988ULL) : (3974299765948587997ULL))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_13 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [(unsigned short)2] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) (~((~(-1191766338)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)13845))))) : ((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_18)) : (arr_8 [3LL])))))));
                                var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_18)) ? (arr_7 [(_Bool)1] [i_1] [1ULL] [i_1]) : (745199439117411439ULL))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
