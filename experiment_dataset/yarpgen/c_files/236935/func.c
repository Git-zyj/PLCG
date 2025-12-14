/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236935
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
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 1579686684)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_10)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)(-32767 - 1))) + (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) ((unsigned char) var_1))) : ((-(((/* implicit */int) (unsigned char)25))))))) : (min((var_3), (((/* implicit */unsigned long long int) min((var_13), (var_10))))))));
    var_20 = ((/* implicit */unsigned short) min((var_20), ((unsigned short)11237)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        arr_3 [23ULL] = ((/* implicit */short) ((((/* implicit */_Bool) (short)17695)) ? (((/* implicit */unsigned long long int) ((arr_2 [i_0 + 1]) ? (((/* implicit */int) arr_2 [i_0 + 3])) : (((/* implicit */int) arr_0 [i_0 + 2]))))) : (((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10703600910327916672ULL)))));
        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
        arr_4 [(unsigned char)12] [(unsigned char)12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_0 + 3])), (arr_1 [i_0 + 4])))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */int) max((var_10), (((/* implicit */unsigned short) (short)32760))))) > (((((/* implicit */_Bool) 3986782472U)) ? (((/* implicit */int) (unsigned short)11237)) : (((/* implicit */int) (unsigned char)155)))))))));
    }
    var_22 *= ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            {
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1]))) == (var_12)))) & (((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) var_9))))));
                arr_10 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((unsigned int) var_4)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) ((var_7) == (((/* implicit */unsigned long long int) 3369316505U))))))))));
                arr_11 [i_2] [i_1] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)30567))));
            }
        } 
    } 
}
