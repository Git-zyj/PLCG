/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33079
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
    var_17 = ((/* implicit */long long int) ((int) max((((/* implicit */unsigned short) (short)-30729)), ((unsigned short)6807))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                var_18 ^= ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 - 1] [i_1 + 3])) ? (((/* implicit */int) ((short) arr_2 [i_1] [i_1 - 1] [i_1 - 1]))) : (((/* implicit */int) max(((unsigned char)153), ((unsigned char)198)))));
                var_19 = (!(((/* implicit */_Bool) ((unsigned int) arr_2 [i_0] [i_0] [i_0]))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            arr_11 [i_2] = ((/* implicit */short) min((((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)55)), ((unsigned short)30484)))) == (((var_14) ? (((/* implicit */int) (short)16946)) : (var_6))))), (((min((((/* implicit */unsigned long long int) (signed char)-55)), (15ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)2898))))))));
                            var_20 = arr_4 [i_1 - 2];
                            var_21 = ((/* implicit */unsigned int) var_2);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_4 = 1; i_4 < 15; i_4 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_5 = 2; i_5 < 16; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0]))))) % (((/* implicit */int) min((arr_0 [i_4]), (arr_0 [i_4])))))))));
                        var_23 = ((/* implicit */long long int) (+(max((((((/* implicit */_Bool) arr_0 [8LL])) ? (((/* implicit */int) arr_18 [i_0] [i_4 - 1] [i_4 + 4] [i_5])) : (((/* implicit */int) arr_1 [i_1 - 2])))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-2898)))))))));
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((unsigned short) arr_14 [i_0] [i_1 + 3] [i_4] [i_5 - 2])))));
                        var_25 += ((/* implicit */long long int) (-(((-1877615907) ^ (((/* implicit */int) (signed char)-58))))));
                    }
                    var_26 -= ((/* implicit */unsigned char) min((var_0), (((/* implicit */long long int) ((short) var_15)))));
                }
                for (short i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) max((((/* implicit */long long int) arr_16 [i_0] [i_1] [i_0] [i_0] [i_0])), (arr_17 [i_0] [i_1]))))) ? (max((((/* implicit */long long int) max(((signed char)56), ((signed char)85)))), (min((arr_6 [11U] [i_1 + 3] [i_6]), (((/* implicit */long long int) (short)2920)))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((var_9) | (((/* implicit */unsigned long long int) var_16)))))))));
                    var_28 *= ((/* implicit */signed char) min((((/* implicit */unsigned int) (short)-2888)), (4294967295U)));
                    var_29 = ((/* implicit */int) ((min((min((15ULL), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0])))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 1925003907U)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (short)-2917))))))))));
                }
            }
        } 
    } 
    var_30 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)5561)) / (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (unsigned char)204)) ? (((/* implicit */unsigned long long int) -2072381683)) : (15062816282916315619ULL)))));
}
