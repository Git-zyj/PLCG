/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189736
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_10 = ((/* implicit */short) min((((/* implicit */signed char) (!(((((/* implicit */int) var_6)) > (arr_2 [i_0])))))), (arr_1 [8U])));
        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (4294967271U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32755)))))))))))));
        var_12 = ((/* implicit */signed char) (+(((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_0 [i_0] [i_0]))))));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_12 [(unsigned short)1] [i_2 - 2] [i_2] [i_4] = ((/* implicit */signed char) ((int) min((((((/* implicit */_Bool) 4294967266U)) ? (arr_11 [i_1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)20))))), (((/* implicit */long long int) ((short) arr_8 [i_2] [i_2] [i_2]))))));
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            arr_16 [i_2] [i_4 - 1] [i_1] [(_Bool)1] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((min((((/* implicit */long long int) (unsigned short)24813)), (var_3))) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)169)))))))));
                            var_13 = ((/* implicit */unsigned int) arr_9 [1] [i_4] [(unsigned char)10] [i_2] [(unsigned char)10]);
                        }
                        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) (-(((/* implicit */int) arr_0 [i_1] [i_1])))))) & (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) max((arr_13 [8U] [0ULL] [i_1] [i_4 - 1] [i_3]), (((/* implicit */unsigned short) (_Bool)1))))) : (((((/* implicit */int) (short)32756)) | (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1])))))))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((8090506791404647467LL), (((/* implicit */long long int) arr_7 [(signed char)6] [i_1] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) arr_7 [i_1] [i_1] [i_1]))))) : (((/* implicit */int) arr_7 [i_1] [i_1] [i_1]))));
    }
    var_16 ^= ((/* implicit */int) var_3);
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max(((short)10759), (((/* implicit */short) (unsigned char)0))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) var_5)), (var_7)))))));
    var_18 *= ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) | ((+(16)))));
}
