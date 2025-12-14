/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44902
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] &= ((/* implicit */unsigned long long int) (-((~(var_1)))));
                arr_8 [i_0] [i_0] [11] = ((/* implicit */int) (((_Bool)0) ? (max((((/* implicit */unsigned long long int) var_8)), (arr_6 [i_0] [i_1 + 2]))) : (((/* implicit */unsigned long long int) (~((((_Bool)1) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_13 [i_2] = ((int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))) & (((arr_9 [i_2] [i_2]) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_2])))))));
            arr_14 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))))) ? ((+(var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
        }
        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            arr_18 [i_2] [14ULL] [i_2] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_9 [i_2] [0U]) ? (((/* implicit */int) arr_9 [i_2] [(_Bool)1])) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)31004))) : (arr_12 [16ULL])));
            arr_19 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-56)))))) : (((unsigned long long int) ((((/* implicit */int) arr_17 [i_2])) > (-1827295904))))));
        }
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_10)))) + ((+(((arr_10 [i_2]) - (arr_10 [i_2])))))));
        arr_20 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15969))) : (8311621019845555976ULL)));
        arr_21 [i_2] [i_2] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_17 [i_2])))) + (((/* implicit */int) (unsigned char)240)))) - ((-(-1571185086)))));
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        arr_25 [i_5] = ((/* implicit */short) ((((/* implicit */int) ((arr_23 [i_5 - 1]) < (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) | (arr_24 [i_5] [i_5 - 1])));
        /* LoopNest 2 */
        for (unsigned int i_6 = 2; i_6 < 23; i_6 += 1) 
        {
            for (signed char i_7 = 1; i_7 < 22; i_7 += 4) 
            {
                {
                    var_16 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)10346))))) ? (min((((/* implicit */int) (signed char)107)), (var_13))) : (((((/* implicit */int) arr_26 [i_6] [i_6] [i_5 - 1])) - (((/* implicit */int) var_3))))))) ? ((+(((((/* implicit */_Bool) arr_31 [i_5 - 1] [i_6 - 1])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [0ULL] [i_6]))))) % (((/* implicit */int) (_Bool)1)))))));
                    var_17 *= ((/* implicit */short) (~(((/* implicit */int) ((_Bool) 3615105613U)))));
                    /* LoopSeq 4 */
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31004)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_4))))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [17U] [i_7 - 1] [i_5]))))))))));
                        arr_34 [i_5] [i_8 + 1] [i_7] [i_6] [i_5] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_29 [i_5 - 1] [i_6 + 1] [i_5] [i_8 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_5 - 1]))) : (((unsigned int) (_Bool)1)))));
                        arr_35 [i_5] [i_5] [i_6] [14LL] [i_5] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_26 [i_5 - 1] [i_6] [i_7 - 1])))), (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) ((unsigned int) -1827295910))) ? (((/* implicit */int) arr_29 [(unsigned short)22] [i_7] [i_5] [i_7])) : (((2147483647) - (((/* implicit */int) (unsigned char)16))))))));
                        arr_36 [i_5 - 1] [i_6] [i_7] [i_5] [i_7] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (arr_22 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43744)))))) > (((((/* implicit */_Bool) arr_22 [i_5])) ? (-345171815142292426LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                    }
                    for (unsigned long long int i_9 = 3; i_9 < 21; i_9 += 4) 
                    {
                        arr_40 [i_5 - 1] [i_5 - 1] [i_6] [i_7 + 2] [i_5] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)254))));
                        var_19 *= ((/* implicit */signed char) var_7);
                    }
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        arr_44 [i_5 - 1] [i_5 - 1] [i_5] = ((/* implicit */unsigned char) (_Bool)1);
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_1))));
                        var_21 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_23 [i_5]) ^ (arr_23 [i_5 - 1])))) ? (min((((/* implicit */unsigned long long int) arr_27 [i_7])), ((-(arr_41 [0ULL]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_23 [i_6 - 1]), (((/* implicit */unsigned int) (signed char)126))))) ? (((/* implicit */long long int) (+(1549909252U)))) : (((long long int) (unsigned char)228)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        arr_47 [i_5] [i_6] [i_6] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_5 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1]))) : (var_7)));
                        arr_48 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_7]))) : (var_11)))) ? (((var_0) | (((/* implicit */long long int) ((/* implicit */int) (signed char)116))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) arr_24 [i_5] [i_7])) - (1187086981U))))));
                        arr_49 [i_5] [i_5] [i_7 + 1] [i_11 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 13604191085812546988ULL))));
                    }
                }
            } 
        } 
        arr_50 [i_5] = ((/* implicit */long long int) arr_24 [i_5] [i_5]);
    }
}
