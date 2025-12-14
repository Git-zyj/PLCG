/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248576
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
    var_10 = ((/* implicit */unsigned short) (+(((((var_0) || (((/* implicit */_Bool) (unsigned short)65516)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)2)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)16))))));
                var_12 = ((((((/* implicit */_Bool) 4294967291U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_0]))))))) || (((/* implicit */_Bool) arr_0 [i_0])));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_13 -= ((/* implicit */unsigned long long int) max((min((((/* implicit */int) (short)4966)), (((((/* implicit */_Bool) (unsigned short)52060)) ? (-713793903) : (arr_10 [i_0] [i_0] [i_2]))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)52060)))))))));
                            arr_12 [i_0] [4LL] = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2] [i_0] [i_2] [i_3 - 1])) && (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_3 - 1])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3] [(_Bool)1])))))) ? (((((/* implicit */_Bool) arr_9 [(unsigned char)18] [i_1] [(unsigned char)18] [i_0] [(short)10] [(unsigned char)18])) ? (arr_8 [i_3 + 1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52060))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2] [20U] [20U]))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
