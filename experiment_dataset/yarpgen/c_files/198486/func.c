/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198486
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        arr_3 [3U] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (short)-26317)))) ? (((/* implicit */int) arr_2 [i_0] [7U])) : (((((/* implicit */_Bool) (short)-26317)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)26316))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            arr_8 [4U] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)0))));
            arr_9 [i_0] [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) (short)-26317)) ? (((/* implicit */int) arr_2 [i_0] [(_Bool)1])) : (((/* implicit */int) arr_6 [i_0] [(unsigned short)11] [(_Bool)1]))))));
            arr_10 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (short)15128)))) * (((((/* implicit */int) (unsigned short)50273)) - (((/* implicit */int) arr_0 [3]))))));
            var_12 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1 - 2])) ? (arr_5 [7U]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 2] [i_1 + 1])))));
        }
    }
    for (int i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                for (unsigned short i_5 = 4; i_5 < 10; i_5 += 4) 
                {
                    {
                        var_13 = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_2] [6U])) * (((/* implicit */int) arr_17 [i_2] [(signed char)4] [7U]))));
                        var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)50264)) ? (((((/* implicit */_Bool) arr_5 [6])) ? (arr_13 [0ULL] [i_5]) : (536869888))) : ((-(((/* implicit */int) arr_16 [(short)9] [i_3] [(unsigned short)8] [i_3])))))) % ((-2147483647 - 1))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            var_15 = (unsigned short)50284;
                            arr_23 [i_3] [(_Bool)1] [i_3] [i_5 - 2] [(short)2] = ((/* implicit */unsigned int) max(((unsigned char)244), ((unsigned char)96)));
                            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (signed char)-69))));
                            arr_24 [i_5] [(unsigned short)4] [(_Bool)1] [i_6] [(unsigned char)8] &= ((/* implicit */signed char) ((((/* implicit */int) ((short) 1551272385U))) - (((((((/* implicit */int) arr_18 [i_2])) >> (((((/* implicit */int) arr_0 [i_5 - 2])) + (67))))) / (((((/* implicit */_Bool) 5055973961321624127LL)) ? (((/* implicit */int) arr_16 [i_2] [i_2] [0ULL] [i_5])) : (((/* implicit */int) (signed char)-123))))))));
                            arr_25 [i_3] [i_3] [i_4] = ((/* implicit */signed char) (unsigned char)31);
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) 4194303)) ? (((/* implicit */int) (unsigned short)50275)) : (((/* implicit */int) (unsigned short)50273)))), (((/* implicit */int) arr_19 [i_5 - 1] [i_5] [i_5] [0ULL])))))));
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) & (14056076874801515220ULL)));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
                        {
                            var_19 ^= ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)10815))) / (569200112U))) >> (((((((/* implicit */_Bool) (short)27374)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned short)49624)))) + (32784)))));
                            var_20 |= ((/* implicit */short) ((((((((/* implicit */int) arr_16 [i_2] [i_3] [i_3] [i_2])) - (((/* implicit */int) arr_4 [(signed char)9] [i_5])))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_28 [i_8] [0] [(short)0] [(short)0] [i_5 - 2] [i_8] [i_8])))))));
                            var_21 = ((/* implicit */_Bool) ((arr_29 [i_2] [i_2] [i_4] [(_Bool)1] [i_5 + 1] [i_8]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5 + 1] [i_5 + 1] [(unsigned char)10])))));
                        }
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)244)) ? (18) : (((/* implicit */int) (short)-26317))))) ? (((((/* implicit */_Bool) arr_2 [i_2] [8U])) ? (((/* implicit */int) (short)26337)) : (((/* implicit */int) (unsigned char)225)))) : (((/* implicit */int) arr_2 [8] [i_2])))), (((/* implicit */int) min((arr_17 [i_2] [i_2] [7LL]), (((/* implicit */unsigned short) arr_28 [i_2] [i_2] [8ULL] [i_2] [4U] [4U] [i_2])))))));
    }
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((((_Bool)0) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) var_1)))), (((int) 173716592))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) % (var_6)))) ? (((int) (unsigned char)150)) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)32767)), (var_5)))))))));
    var_24 = ((/* implicit */signed char) (((((~(6294409867916449446LL))) & (((/* implicit */long long int) ((((/* implicit */unsigned int) -1569802550)) ^ (814163862U)))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (-37) : (18))))));
}
