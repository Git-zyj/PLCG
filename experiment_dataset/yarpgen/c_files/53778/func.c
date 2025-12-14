/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53778
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
    var_13 = ((/* implicit */_Bool) ((((((((/* implicit */int) var_0)) != (((/* implicit */int) var_5)))) || (((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 72057593769492480LL)) && (((/* implicit */_Bool) -1428304523)))))) : (((var_11) << (((((/* implicit */int) var_6)) + (41)))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */long long int) var_1);
                    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 4] [i_0 + 4])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_0 [i_0] [5LL])))))) ? (((/* implicit */int) min((((/* implicit */short) var_2)), (arr_8 [(signed char)0] [i_0 + 3] [i_0] [i_0 + 3])))) : (((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 - 1])) ? (arr_5 [i_0 - 1] [i_0 + 1]) : (((/* implicit */int) var_5)))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 4; i_3 < 21; i_3 += 4) 
                    {
                        arr_11 [i_3] [i_2] [i_1] [i_3] |= ((/* implicit */unsigned char) ((((unsigned long long int) var_1)) >> (((((/* implicit */int) ((signed char) (+(((/* implicit */int) var_6)))))) + (62)))));
                        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_7 [i_1] [i_3] [i_3 - 1])))) : (((((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-21))) : (860104285U))) >> (((/* implicit */int) var_1))))));
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((long long int) var_0)))) == (((/* implicit */int) arr_4 [i_1]))));
                        var_18 = ((/* implicit */long long int) var_1);
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            var_19 &= ((/* implicit */int) max((min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) >= (var_11)))), (max((((/* implicit */unsigned long long int) var_6)), (arr_3 [i_0] [i_1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) var_0)), (var_1)))) * (((/* implicit */int) ((var_7) > (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))))));
                            var_20 = ((/* implicit */long long int) min((((((/* implicit */unsigned int) arr_12 [i_3] [i_3] [i_3] [i_3 + 1] [(short)9])) & (var_11))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_3] [i_3 + 1] [i_3])) ? (arr_12 [i_3] [i_3 - 4] [i_3] [i_3 + 1] [i_3]) : (arr_12 [4LL] [4LL] [i_1] [i_3 + 1] [i_3]))))));
                            var_21 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_0 + 4] [i_3 + 1])) ? (arr_0 [(short)13] [i_3 - 3]) : (var_11))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4] [i_3] [i_2] [i_3] [(unsigned char)20])))));
                            var_22 -= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) var_7)) ? (var_12) : (((var_9) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))))));
                            var_23 = ((/* implicit */long long int) var_9);
                        }
                        for (signed char i_5 = 3; i_5 < 21; i_5 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */_Bool) min((var_24), (((_Bool) arr_2 [i_2]))));
                            var_25 = ((/* implicit */short) max((((/* implicit */int) ((signed char) var_7))), (((int) var_5))));
                            var_26 = ((/* implicit */int) ((((((/* implicit */int) ((unsigned char) var_12))) >= (var_4))) ? (((unsigned int) min((((/* implicit */unsigned char) var_6)), (arr_2 [i_0])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((signed char) var_10))) : (((/* implicit */int) var_0)))))));
                        }
                        for (signed char i_6 = 3; i_6 < 21; i_6 += 2) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_5 [i_0] [i_0]), (((/* implicit */int) arr_10 [i_0] [i_3] [i_0 + 4] [i_0 + 3] [i_0]))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_12)) : (arr_14 [i_1] [i_1] [i_2] [(short)10] [i_6 - 1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_0 [i_1] [i_3]))) ? (((/* implicit */int) var_1)) : (arr_1 [i_3 - 2])))))))));
                            var_28 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((arr_6 [i_0] [i_0] [i_6]) | (((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_6])))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_5))))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_6 [i_0 + 4] [i_1] [i_0 + 4]), (arr_6 [i_0 + 4] [i_0] [i_0])))) ? (((/* implicit */int) arr_8 [i_3 - 3] [i_3 - 3] [i_3] [i_3])) : (arr_17 [(_Bool)1] [i_6] [(unsigned char)19] [i_6] [i_6 - 2])))) : (((((/* implicit */_Bool) ((short) arr_20 [11U] [i_1] [i_2] [i_3 - 1] [i_6]))) ? ((+(-72057593769492486LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) (_Bool)1)) : (-96474401))))))));
                            arr_22 [(short)13] [(short)13] [i_0] = ((/* implicit */long long int) (~(var_4)));
                            var_29 = ((/* implicit */short) ((long long int) min((((var_7) << (((((/* implicit */int) arr_4 [i_0])) - (1536))))), (((/* implicit */unsigned int) var_1)))));
                        }
                    }
                    for (unsigned char i_7 = 1; i_7 < 21; i_7 += 4) 
                    {
                        var_30 |= ((/* implicit */short) var_7);
                        var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [11LL])) >= (((/* implicit */int) var_9)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_0] [i_1] [i_1] [19]))))))));
                    }
                    var_32 += ((/* implicit */_Bool) ((unsigned char) ((long long int) var_10)));
                }
            } 
        } 
    } 
}
