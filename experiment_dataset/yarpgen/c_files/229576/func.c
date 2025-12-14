/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229576
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
    var_18 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-79))));
    var_19 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-7)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)54)), ((short)-19405))))) : (var_8))) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)19405)))) : (((/* implicit */int) var_10))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49152))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (arr_4 [i_0] [i_1] [i_2]) : (((/* implicit */int) (unsigned short)32917)))))))) && (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (signed char)-120)) ? (8338148524811118101LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-117)))))))));
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(signed char)13] [(unsigned char)3] [(signed char)13] [i_1 - 1])) ? (((/* implicit */int) arr_7 [i_1] [i_1] [12ULL])) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1 - 1]))))) ? (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [(unsigned char)5] [i_1 - 1])) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1 - 1])) : (((/* implicit */int) arr_6 [i_1] [i_1] [(_Bool)1])))) : ((-(((/* implicit */int) (unsigned short)32767))))));
                            var_21 = ((/* implicit */long long int) ((unsigned short) min((((/* implicit */short) (!(((/* implicit */_Bool) 1073741823))))), (((short) var_11)))));
                            arr_12 [i_0] [(short)3] [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)38779)) : (((/* implicit */int) arr_3 [i_0 - 2])))))));
                        }
                    } 
                } 
                arr_13 [(unsigned short)10] [(unsigned short)10] [i_1] = ((/* implicit */short) 644531764);
            }
        } 
    } 
}
