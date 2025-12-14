/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53028
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
    var_12 = ((/* implicit */long long int) var_4);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [2U] [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) 200724090069922662ULL))));
        var_14 = ((/* implicit */signed char) ((unsigned char) (unsigned char)112));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_1 [i_0]))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))));
            arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1]))));
        }
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (signed char i_3 = 2; i_3 < 20; i_3 += 4) 
            {
                {
                    var_16 += ((unsigned short) ((signed char) max((((/* implicit */int) var_7)), (-2116157946))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        for (int i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            {
                                arr_20 [i_0] [(signed char)0] [i_3] [i_4] [i_5] [i_3] = arr_10 [i_0] [i_2] [i_3];
                                arr_21 [i_3] [i_2] = ((/* implicit */signed char) var_1);
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_4 [i_0]))))) * (((((/* implicit */_Bool) 0ULL)) ? (14374005336629083313ULL) : (18246019983639628953ULL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) 
    {
        var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)255)), (200724090069922662ULL)));
        arr_25 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((unsigned long long int) 4095ULL)), (200724090069922678ULL)))) ? (((((/* implicit */_Bool) 8594476417455676776ULL)) ? (arr_2 [i_6]) : (9852267656253874839ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-58)))));
        var_19 += ((/* implicit */signed char) (+(((unsigned long long int) arr_9 [i_6] [i_6]))));
    }
    /* vectorizable */
    for (signed char i_7 = 2; i_7 < 10; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 2) 
            {
                {
                    var_20 += ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_0))))));
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_7 + 2] [i_7 - 2])) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_7] [i_8])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11))))))))));
                    var_22 = var_0;
                    var_23 |= ((/* implicit */_Bool) 1099511627768ULL);
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 1; i_10 < 10; i_10 += 4) 
                    {
                        var_24 = ((((/* implicit */int) (unsigned short)64769)) >= (((/* implicit */int) arr_15 [i_10 - 1] [i_10] [i_10 + 2] [i_10])));
                        arr_37 [i_10] [(short)2] [i_8] [i_7 + 3] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_7] [i_7 + 1] [i_7 + 1] [i_10 + 2]))) - (((200724090069922662ULL) | (var_6))));
                    }
                }
            } 
        } 
        var_25 = (~(((/* implicit */int) arr_4 [6U])));
        arr_38 [(signed char)10] = ((/* implicit */unsigned short) -4578150493432050477LL);
    }
}
