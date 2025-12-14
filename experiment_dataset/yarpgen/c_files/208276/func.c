/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208276
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
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) (short)8997)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_2 [14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (6868938225670603048ULL))))) ? (max((((/* implicit */unsigned long long int) (short)32767)), (((((/* implicit */unsigned long long int) var_8)) + (arr_0 [i_0 + 2] [i_0 + 2]))))) : (((/* implicit */unsigned long long int) ((long long int) max((arr_0 [i_0] [i_0 + 1]), (((/* implicit */unsigned long long int) (short)32767))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 24; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_20 |= (-(((/* implicit */int) max((arr_2 [(signed char)12]), (((/* implicit */unsigned short) ((var_12) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(signed char)12] [i_3] [i_2 + 1]))))))))));
                        var_21 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_8 [i_0] [3U] [i_0])) ? (var_17) : (((/* implicit */unsigned long long int) (~(var_0)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */int) max((((/* implicit */short) (signed char)-114)), ((short)-32755)))) : (((/* implicit */int) arr_5 [i_0 + 1] [i_2 + 1] [(unsigned short)22])))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)215))))), ((unsigned char)255)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32761)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1023)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 + 3] [i_0] [i_0] [i_0 + 1]))) : (var_1))) : (((/* implicit */long long int) ((/* implicit */int) (((+(arr_0 [i_0] [i_0]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(_Bool)1] [i_0] [i_0 + 1])))))))));
        var_23 = ((/* implicit */_Bool) arr_8 [(unsigned short)8] [(unsigned char)22] [i_0]);
        var_24 = ((/* implicit */signed char) arr_4 [i_0 - 1] [i_0 - 1]);
    }
}
