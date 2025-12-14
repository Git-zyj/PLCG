/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25846
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (5375160339506390561ULL) : (((/* implicit */unsigned long long int) -2398935472040206522LL))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) || ((_Bool)0))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59002)) ? (((/* implicit */int) arr_1 [i_0] [i_2])) : (((/* implicit */int) var_13))))) ? (max((var_17), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)38)) ? (((/* implicit */int) (_Bool)0)) : (var_11))))))));
                    arr_7 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1769514220U)) ? (((/* implicit */int) arr_0 [i_0])) : (var_12)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_6)))) : (((/* implicit */int) max((var_6), ((unsigned short)6546)))))), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)65535)), (3366403740990912364LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 8174573733602997467LL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned short)15))))))))));
                    arr_8 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) arr_3 [i_2] [i_1] [(unsigned char)15]);
                }
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)6)), ((unsigned char)220)))))))))));
                arr_9 [i_0] [(signed char)7] = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(unsigned short)3] [i_0])) && (((/* implicit */_Bool) var_11))))) > (var_11))) ? (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)255))))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (30) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_1]))))));
                var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)31)) | (var_12)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((unsigned int) ((unsigned char) max(((unsigned short)6516), (((/* implicit */unsigned short) (signed char)3))))));
    var_22 = ((/* implicit */_Bool) (unsigned short)59002);
    var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_7)), (max((var_16), (((/* implicit */unsigned int) (short)-3704))))));
}
