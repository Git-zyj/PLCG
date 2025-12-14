/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48248
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
    var_13 = ((((/* implicit */_Bool) (-(((var_10) + (var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(((/* implicit */int) var_7)))) > (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (var_0))))))) : (max((var_11), (((18446744073709551584ULL) ^ (((/* implicit */unsigned long long int) (-2147483647 - 1))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        arr_2 [0ULL] [0ULL] = ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) + (var_1)))) ? (((((/* implicit */unsigned long long int) var_0)) & (11ULL))) : (((var_12) - (((/* implicit */unsigned long long int) (-2147483647 - 1))))));
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            arr_15 [i_0] [i_0] [3ULL] [i_1] [i_2] [i_3 + 2] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) 3812141484U));
                            var_14 = ((/* implicit */unsigned long long int) 1573555363U);
                            arr_16 [i_1] [i_3] [i_2] [i_1] [i_0 + 2] [i_1] = (+((+(var_12))));
                            var_15 = ((/* implicit */unsigned char) arr_11 [i_1] [i_1] [i_4]);
                        }
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            arr_19 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_3] [(unsigned char)1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 14341392793787448821ULL)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)32129))));
                            var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)65506))));
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6586991866048799262ULL)) ? (((/* implicit */int) (unsigned short)65525)) : (((/* implicit */int) (unsigned short)13030))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -9040107453259153842LL)) ? (3341337555650777153ULL) : (((/* implicit */unsigned long long int) -9040107453259153842LL)))))));
                            var_18 += ((/* implicit */unsigned short) ((unsigned int) arr_7 [i_5] [i_0] [8ULL]));
                            var_19 = ((/* implicit */unsigned int) 14341392793787448822ULL);
                        }
                        var_20 *= ((/* implicit */unsigned short) arr_5 [i_0] [6U] [i_2]);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_6 = 1; i_6 < 9; i_6 += 2) 
        {
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((((((/* implicit */_Bool) 13468488692393982752ULL)) ? (arr_23 [i_0] [(unsigned char)6] [i_6]) : (((/* implicit */unsigned long long int) arr_20 [2])))) - (arr_4 [i_0 + 2] [i_0 + 3] [4ULL])))));
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (unsigned short)40485))));
            var_23 ^= ((/* implicit */unsigned short) ((arr_4 [i_6 + 1] [i_6] [2]) % (arr_4 [i_6 - 1] [i_6] [4LL])));
        }
    }
    var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) max((var_4), (var_7)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)50146)) ? (531900558571372202LL) : (((/* implicit */long long int) var_0))))) : (min((((/* implicit */unsigned long long int) var_3)), (var_6))))) - (((/* implicit */unsigned long long int) min((var_8), (((unsigned int) var_12)))))));
    var_25 = ((unsigned long long int) max((((/* implicit */unsigned long long int) ((var_3) - (((/* implicit */int) (_Bool)1))))), (var_2)));
}
