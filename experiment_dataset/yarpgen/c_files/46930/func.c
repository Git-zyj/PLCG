/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46930
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
    var_16 = ((/* implicit */unsigned int) max(((unsigned char)15), ((unsigned char)0)));
    var_17 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_13), (var_9))))))) || (((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) var_11))), ((~(((/* implicit */int) var_6)))))))));
    var_18 = ((((((/* implicit */unsigned long long int) -1950021992861945775LL)) >= ((+(var_2))))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-32758)) | (((/* implicit */int) (unsigned char)248))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)22)))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (var_10))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned long long int) arr_1 [(_Bool)1] [i_0]);
                var_19 = ((/* implicit */signed char) min((((((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_0 [i_0 + 2] [(unsigned char)3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_4 [1LL]), (((/* implicit */unsigned char) (_Bool)0)))))) : (max((((/* implicit */unsigned long long int) arr_5 [i_0] [(signed char)21] [i_0 - 2])), (arr_0 [(unsigned short)15] [8LL]))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0] [i_0] [i_1])))))));
            }
        } 
    } 
}
