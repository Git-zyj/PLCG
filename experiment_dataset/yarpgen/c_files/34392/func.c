/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34392
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) min((((4410148313921166880ULL) & (((/* implicit */unsigned long long int) -7714777854993921410LL)))), (((/* implicit */unsigned long long int) ((short) (~(var_4)))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            arr_4 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))));
            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) var_5))));
        }
        var_15 &= ((/* implicit */short) (~(max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (var_12))), (((/* implicit */unsigned long long int) arr_3 [i_0]))))));
        arr_5 [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_7)) : (arr_2 [i_0] [15LL]))) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
    }
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        var_16 = arr_7 [i_2] [i_2];
        var_17 = ((/* implicit */unsigned long long int) arr_6 [i_2] [i_2]);
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4410148313921166880ULL)) ? (4410148313921166880ULL) : (14036595759788384747ULL)))) && (((arr_7 [i_2] [(short)10]) || (arr_7 [i_2] [i_2])))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_19 = ((/* implicit */signed char) (+(var_4)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                var_20 = ((/* implicit */long long int) (~(var_10)));
                var_21 = ((/* implicit */signed char) var_9);
                var_22 = ((/* implicit */_Bool) var_5);
                var_23 = (+(arr_15 [i_3]));
            }
            for (int i_6 = 2; i_6 < 21; i_6 += 2) 
            {
                var_24 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_4])) && (((/* implicit */_Bool) var_2))));
                var_25 = ((((arr_16 [i_6 + 2] [17LL] [i_4] [i_3]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [i_4] [i_6]))))) - (((unsigned int) var_9)));
                var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) arr_14 [i_3] [(signed char)0] [(signed char)0] [i_4]))));
                /* LoopSeq 3 */
                for (unsigned int i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
                {
                    var_27 = ((/* implicit */short) (~(4410148313921166855ULL)));
                    var_28 = ((/* implicit */unsigned long long int) arr_17 [i_3] [i_3]);
                    var_29 = ((/* implicit */_Bool) (-(((((/* implicit */int) var_8)) << (((((/* implicit */int) var_2)) - (18)))))));
                }
                for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) /* same iter space */
                {
                    var_30 = ((/* implicit */short) (-(arr_16 [i_6 - 2] [i_6 - 1] [i_6 + 2] [i_6])));
                    arr_25 [i_3] = arr_12 [i_3];
                    var_31 *= ((/* implicit */signed char) arr_12 [i_6 - 2]);
                    arr_26 [i_3] = ((/* implicit */long long int) arr_23 [i_6]);
                    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) arr_12 [i_8]))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_31 [i_3] [i_6 + 1] [i_3] = ((/* implicit */unsigned long long int) (-(arr_16 [i_3] [i_4] [(signed char)7] [i_9])));
                    var_33 = ((/* implicit */short) (+(((/* implicit */int) arr_9 [i_3]))));
                }
            }
            var_34 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_17 [i_4] [i_3]))));
            var_35 &= ((/* implicit */signed char) arr_18 [i_4] [i_3]);
            var_36 = ((/* implicit */int) arr_16 [i_3] [i_3] [i_3] [i_4]);
        }
    }
    var_37 = ((/* implicit */signed char) (((((~(var_12))) << (min((var_0), (((/* implicit */unsigned int) var_2)))))) ^ (((/* implicit */unsigned long long int) var_4))));
    var_38 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_2))))) ? (max((var_12), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)32))) : (2948451478513615993LL)))))) != (var_12)));
}
