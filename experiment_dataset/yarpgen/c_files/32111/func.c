/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32111
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) min((min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0])))), (((/* implicit */unsigned long long int) ((_Bool) (-(((/* implicit */int) (short)0))))))));
        arr_2 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_10))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) != (2483608334074953662ULL)))) : (((/* implicit */int) ((unsigned char) 2483608334074953657ULL))))))));
        /* LoopSeq 3 */
        for (long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) var_6)))))) ? ((+(arr_1 [i_0]))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_1])), (var_9)))) ? (max((var_2), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))))));
            /* LoopSeq 4 */
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                arr_9 [0] [i_1] [0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(signed char)4]))) : (15963135739634597953ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((arr_5 [i_0] [i_0] [i_0]) >> (((((/* implicit */int) (short)10094)) - (10066)))))))) && (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned short)16))))))));
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_2])))))));
            }
            for (short i_3 = 1; i_3 < 9; i_3 += 4) /* same iter space */
            {
                arr_12 [i_1] [i_1] [i_3] = min((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_7 [i_3] [i_3] [i_0] [i_0]))))))), (min((((((/* implicit */_Bool) 2483608334074953662ULL)) ? (15963135739634597953ULL) : (15963135739634597933ULL))), (((/* implicit */unsigned long long int) max((arr_5 [i_0] [i_1] [i_3]), (((/* implicit */int) var_6))))))));
                arr_13 [0LL] [0LL] |= ((/* implicit */unsigned char) (!(((_Bool) min(((unsigned short)0), (arr_7 [i_3] [i_1] [i_0] [i_0]))))));
            }
            /* vectorizable */
            for (short i_4 = 1; i_4 < 9; i_4 += 4) /* same iter space */
            {
                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1 + 2])) <= (((/* implicit */int) arr_0 [i_1 + 2])))))));
                var_16 = ((/* implicit */long long int) (((-(2483608334074953662ULL))) << (((arr_11 [i_0] [i_1] [i_1]) - (5667697947081792384ULL)))));
            }
            /* vectorizable */
            for (short i_5 = 1; i_5 < 9; i_5 += 4) /* same iter space */
            {
                var_17 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1 + 2] [i_5 + 2] [i_1 + 2])) ? (arr_15 [i_1 - 1] [i_1 - 1] [i_5 - 1]) : (((((/* implicit */_Bool) (unsigned short)59257)) ? (arr_15 [i_0] [i_0] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (unsigned short)0))));
            }
            arr_19 [i_1] [i_1] = ((/* implicit */unsigned short) ((((unsigned long long int) arr_3 [i_1 + 1] [i_1 - 1] [i_1 + 1])) < (min((((/* implicit */unsigned long long int) arr_16 [i_1 + 2] [i_1] [i_1])), (arr_11 [i_1 + 1] [i_1 + 1] [i_0])))));
            arr_20 [i_0] [i_1] [i_0] = ((short) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) & (((/* implicit */int) arr_0 [i_0])))))));
        }
        for (short i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            arr_23 [i_6] = ((/* implicit */short) ((long long int) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_6 [4])) : (((/* implicit */int) var_1)))))));
            var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_17 [6U] [i_0] [i_6]), (arr_17 [(short)4] [(short)4] [i_6]))))) % ((-(((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
            var_20 = ((/* implicit */unsigned char) (((!((_Bool)0))) ? (min((min((((/* implicit */unsigned long long int) (unsigned short)65535)), (var_2))), (((/* implicit */unsigned long long int) (unsigned char)17)))) : (((/* implicit */unsigned long long int) var_8))));
            var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned long long int) 0LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_14 [4LL]), (((/* implicit */short) arr_6 [(unsigned char)8])))))) : (((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0])) ? (arr_11 [i_0] [i_6] [i_0]) : (arr_8 [(_Bool)0] [(_Bool)0] [(_Bool)0] [(_Bool)0]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) var_1)) <= (((/* implicit */int) arr_21 [i_0] [i_0])))))))));
        }
        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            var_22 = ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) >= (-16LL))))))) ? (min((((/* implicit */int) min(((unsigned char)129), (((/* implicit */unsigned char) (signed char)10))))), ((+(((/* implicit */int) arr_16 [i_0] [i_0] [i_7])))))) : (((/* implicit */int) ((unsigned short) 1509348533))));
            /* LoopSeq 1 */
            for (unsigned char i_8 = 2; i_8 < 11; i_8 += 2) 
            {
                var_23 = ((/* implicit */short) max((min((arr_15 [i_0] [i_8 + 1] [i_8]), (arr_15 [i_0] [i_8 + 1] [i_8]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)-31260)))) | (((arr_8 [i_7] [i_0] [i_7] [i_8]) | (arr_11 [i_0] [i_7] [i_0])))))));
                arr_30 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max(((+(((/* implicit */int) arr_17 [i_8] [i_7] [i_7])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_8 - 2] [i_8 + 1] [i_8 - 1] [i_8 - 2])))))));
                var_24 = ((((/* implicit */_Bool) arr_18 [i_8])) && (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_8] [i_8])));
                arr_31 [i_0] [i_0] = ((/* implicit */unsigned char) arr_26 [i_0] [i_0] [i_0] [i_0]);
            }
            var_25 = ((/* implicit */long long int) (~(((unsigned long long int) (~(((/* implicit */int) arr_22 [i_0] [i_0] [i_0])))))));
        }
    }
    var_26 += ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
    /* LoopSeq 1 */
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        var_27 = ((/* implicit */_Bool) max((var_27), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_32 [i_9]))))) ? (((((/* implicit */_Bool) var_9)) ? (arr_35 [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-11)))))))))))));
        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) ((short) min((arr_35 [i_9]), (((/* implicit */unsigned long long int) var_5)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15963135739634597952ULL)) ? (((((/* implicit */_Bool) (signed char)-21)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32747))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_9])) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) (signed char)15)))))))) : (arr_35 [i_9]))))));
    }
}
