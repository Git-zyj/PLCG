/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50672
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
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) (short)-15944)) : (((/* implicit */int) arr_0 [i_0 + 4] [i_0 + 2])))));
        arr_3 [(unsigned short)11] [i_0 + 4] |= ((/* implicit */unsigned long long int) min((max((1016311936U), (((/* implicit */unsigned int) (short)-15956)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_1 [i_0 + 4]), (((/* implicit */int) arr_0 [1U] [i_0]))))) ? (((((/* implicit */_Bool) 0U)) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))))));
        arr_4 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((((((/* implicit */_Bool) 4294967272U)) || (((/* implicit */_Bool) arr_1 [i_0 - 1])))) && (((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0])))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 20; i_1 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 3; i_2 < 21; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    {
                        arr_15 [8ULL] [i_1] [0] [9ULL] = ((/* implicit */unsigned short) ((signed char) (signed char)-68));
                        arr_16 [i_1] = ((/* implicit */_Bool) ((unsigned short) var_8));
                        arr_17 [i_1] [i_2 - 1] [i_1] = ((/* implicit */short) arr_9 [(short)7] [(short)7] [(unsigned char)18]);
                        arr_18 [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_1] [i_1] [i_4])) << (((((/* implicit */int) arr_12 [i_1] [i_4] [i_3])) - (187)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_1] [i_1] [i_4])) << (((((((/* implicit */int) arr_12 [i_1] [i_4] [i_3])) - (187))) + (162))))));
                    }
                } 
            } 
        } 
        arr_19 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [15ULL] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_6 [(_Bool)1]))))) : (((18367809358018214665ULL) | (((/* implicit */unsigned long long int) 0U))))));
        arr_20 [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_13))));
    }
    for (unsigned int i_5 = 2; i_5 < 20; i_5 += 3) /* same iter space */
    {
        var_17 = ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_22 [i_5 - 2]))))) + ((~(1099075313U))));
        var_18 = ((/* implicit */short) ((((_Bool) ((((/* implicit */int) (short)15955)) ^ (((/* implicit */int) (signed char)64))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_5 + 2] [i_5] [i_5 + 2] [i_5])) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) (short)15944))))), ((~(11251185786068454086ULL))))))));
        var_19 = ((/* implicit */int) (+(min((arr_13 [i_5 + 1]), (arr_13 [i_5 + 2])))));
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_5 + 1])) ? (((/* implicit */int) (short)-14044)) : (((/* implicit */int) (signed char)108))))) : (arr_24 [i_5 - 2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-15942)), (2076111200U))))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) 2699848198333005687LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (2699848198333005687LL)))))))));
            var_21 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_25 [i_5] [i_5 - 1])) ? (arr_14 [i_5 + 2] [i_5 + 2]) : (arr_14 [i_5 + 1] [i_5 - 2])))));
        }
        for (int i_7 = 3; i_7 < 18; i_7 += 3) 
        {
            var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? ((+(var_9))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)-15923)) - (((/* implicit */int) var_15)))))))) ? (((((/* implicit */_Bool) arr_27 [i_7 + 3])) ? (((/* implicit */int) (unsigned char)177)) : (((/* implicit */int) arr_26 [i_7 + 1])))) : (((/* implicit */int) arr_22 [i_5 - 2])));
            var_23 = ((/* implicit */short) min(((-(arr_27 [i_7 + 1]))), (((/* implicit */unsigned int) (-(((/* implicit */int) min(((short)-32763), ((short)15944)))))))));
            var_24 = (+(((((/* implicit */_Bool) arr_7 [i_5 - 1])) ? (((/* implicit */int) arr_7 [i_5 - 1])) : (((/* implicit */int) arr_7 [i_5 + 2])))));
        }
    }
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_0)))) ? (1420850294691886591ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) * (var_4))))))) : ((+(((/* implicit */int) (signed char)-71))))));
}
