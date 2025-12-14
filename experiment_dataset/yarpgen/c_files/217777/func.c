/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217777
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
    var_11 = ((/* implicit */int) min((var_11), (max((var_6), (((/* implicit */int) var_10))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 6; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) (unsigned char)240);
        var_12 = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)243))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(signed char)1]))) & (3618395389U))))), (((/* implicit */unsigned int) var_9))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_13 += ((/* implicit */unsigned int) min((((short) max((((/* implicit */int) (short)-4353)), (1929485563)))), (((/* implicit */short) max(((unsigned char)112), (((/* implicit */unsigned char) (signed char)24)))))));
                    var_14 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_8 [i_0 + 4])), (arr_2 [i_0 - 1])))) ? (min((((/* implicit */unsigned int) arr_8 [i_0 + 2])), (var_3))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 - 2]))) | (arr_2 [i_0 + 4]))));
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((short) 4294967295U)))));
                }
            } 
        } 
    }
    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)16)) - (((/* implicit */int) var_1))));
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            var_17 ^= var_7;
            var_18 ^= var_1;
        }
        for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            arr_19 [i_3] = ((((/* implicit */_Bool) ((((((/* implicit */int) arr_14 [i_3])) == (((/* implicit */int) var_9)))) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) -2041073076))))) ? ((~(((/* implicit */int) arr_14 [i_3])))) : ((+(((/* implicit */int) arr_18 [i_5] [i_5] [i_3])))));
            var_19 = ((/* implicit */unsigned int) max((var_19), (((((/* implicit */_Bool) min((min((arr_17 [i_3] [i_3]), (((/* implicit */long long int) 2041073063)))), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)12)))))))) ? (max((477361898U), ((-(0U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (unsigned char)22))))) ? (((/* implicit */int) ((signed char) 212985428U))) : (((/* implicit */int) var_8)))))))));
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    {
                        arr_24 [5] [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_5)), ((-(var_6)))))) ? (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)4353)) : (((/* implicit */int) (unsigned char)8)))) ^ ((~(((/* implicit */int) (unsigned short)51561)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_3] [i_5])) ? (1122501063U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))))));
                        arr_25 [i_6] [i_7] = ((/* implicit */unsigned char) var_3);
                    }
                } 
            } 
        }
        arr_26 [(signed char)20] = ((/* implicit */unsigned char) var_8);
        /* LoopSeq 1 */
        for (long long int i_8 = 2; i_8 < 22; i_8 += 3) 
        {
            arr_30 [(signed char)3] [i_8 - 2] |= ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned char) arr_29 [i_3] [i_3] [(signed char)8]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (4229192166U));
            var_20 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(-2041073069)))), (10588293948172992258ULL)));
            arr_31 [i_3] [i_3] [i_8 + 1] = min((((/* implicit */int) min((arr_29 [i_3] [i_8 - 2] [i_3]), (arr_29 [(signed char)21] [i_8 + 1] [i_8])))), (((((/* implicit */_Bool) arr_29 [(unsigned char)8] [i_8 - 1] [(unsigned char)8])) ? (((/* implicit */int) arr_29 [1LL] [i_8 - 2] [i_8 + 1])) : (((/* implicit */int) (unsigned short)21639)))));
            /* LoopNest 2 */
            for (unsigned char i_9 = 2; i_9 < 20; i_9 += 2) 
            {
                for (int i_10 = 0; i_10 < 23; i_10 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) var_4);
                        arr_38 [i_3] [i_10] = ((/* implicit */unsigned int) var_10);
                    }
                } 
            } 
        }
    }
}
