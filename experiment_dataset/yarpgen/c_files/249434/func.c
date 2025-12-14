/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249434
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
    var_12 = ((/* implicit */signed char) -1542486707);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) 10113750576848351154ULL)) ? (8332993496861200462ULL) : (((8332993496861200433ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            arr_6 [(unsigned char)15] [i_0] [i_0] = ((/* implicit */int) 10113750576848351154ULL);
            var_14 = var_2;
            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) : (arr_3 [(unsigned short)6] [i_1] [21])))))) ? (((/* implicit */int) ((arr_0 [i_0 + 1] [i_1]) == (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1] [i_1]))))) : (max((((/* implicit */int) arr_2 [i_0] [i_1] [i_0 + 1])), (var_2)))));
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_3 [(short)11] [i_0 + 1] [i_0 + 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) % (arr_3 [i_0] [i_0 + 1] [12LL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_0 + 1] [i_0 + 1] [21LL]) <= (arr_3 [i_0] [i_0 + 1] [11LL])))))));
            var_16 = var_6;
        }
        for (int i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
        {
            var_17 -= ((/* implicit */unsigned char) ((((((10113750576848351157ULL) % (8332993496861200462ULL))) / (arr_8 [i_2] [i_0]))) >= (((/* implicit */unsigned long long int) arr_0 [i_0 + 1] [i_2]))));
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)0)) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (8332993496861200433ULL) : (arr_8 [i_0] [i_0])))) ? (((/* implicit */int) ((signed char) (unsigned short)46118))) : (((/* implicit */int) ((signed char) var_1))))) - (15))))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) 8332993496861200443ULL)) ? (arr_3 [i_0 + 1] [(unsigned char)18] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
            var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) % ((-(8332993496861200443ULL)))));
            var_21 = ((/* implicit */unsigned char) (-(arr_0 [i_0 + 1] [i_3])));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                for (int i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 10113750576848351201ULL)) && (((/* implicit */_Bool) var_1)))))) : ((-(1381932732U)))));
                            var_23 = ((/* implicit */long long int) max((var_23), (((long long int) arr_1 [i_0]))));
                            arr_20 [i_0] [i_3] [18LL] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) 10113750576848351153ULL)) && (((/* implicit */_Bool) 8332993496861200455ULL))));
                            arr_21 [i_6] [i_6] [i_4] [i_3] [17] [(short)5] = ((/* implicit */_Bool) var_10);
                            arr_22 [i_6] [i_5] [i_6] [i_6] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 17592118935552LL))));
                        }
                    } 
                } 
            } 
        }
        var_24 = ((/* implicit */unsigned short) ((((4333993433202929673LL) != (((/* implicit */long long int) var_9)))) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) ((max((((/* implicit */unsigned int) arr_4 [i_0] [i_0])), (2075347419U))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) var_2))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_26 [i_7] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 3058973883456137895LL)) ? (10113750576848351154ULL) : (8332993496861200459ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        arr_27 [i_7] = ((/* implicit */unsigned short) min((((/* implicit */int) max((((/* implicit */signed char) var_5)), (arr_5 [i_7] [i_7])))), (max(((((_Bool)1) ? (((/* implicit */int) arr_1 [i_7])) : (((/* implicit */int) var_0)))), (((((/* implicit */int) arr_19 [i_7])) % (((/* implicit */int) (_Bool)1))))))));
        var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned char)53), (((/* implicit */unsigned char) arr_18 [i_7] [17LL] [17LL] [17LL] [i_7]))))) ? (7749244641473503359LL) : (((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_7] [i_7] [i_7] [20LL] [(unsigned short)13])) >> (((((/* implicit */int) arr_17 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) - (47106))))))))) ? (max((((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [(unsigned short)11]))) : (10113750576848351173ULL))), ((-(10113750576848351153ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_13 [(signed char)11] [i_7] [i_7] [i_7]))))));
        arr_28 [i_7] [i_7] = ((/* implicit */_Bool) (-((~(((((/* implicit */_Bool) arr_3 [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_7]))) : (8332993496861200480ULL)))))));
        arr_29 [i_7] = ((arr_3 [10LL] [10LL] [i_7]) % (((/* implicit */unsigned long long int) 2251799813685247LL)));
    }
    var_27 = ((unsigned char) var_3);
}
