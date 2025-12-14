/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214689
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
    var_18 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)38159))) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) (unsigned char)244)))), (((/* implicit */int) var_5))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) arr_8 [i_1] [i_1] [i_1] [i_0] [i_1]);
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            arr_13 [i_1] [i_3] [i_3] [i_2 + 3] [i_1] [i_1] = ((/* implicit */long long int) 11039619602242286409ULL);
                            arr_14 [i_0] [i_3] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) arr_8 [i_1] [i_1] [i_2] [i_3] [i_0]);
                            var_20 = ((/* implicit */int) -996327679504478978LL);
                        }
                        for (int i_5 = 2; i_5 < 24; i_5 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned int) -7893065842314979990LL);
                            var_22 += ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0 + 3] [i_1] [i_2 + 1] [i_3] [6ULL] [i_5])) ? (((/* implicit */int) arr_6 [i_0 + 2] [i_2 + 1])) : (((-590186123) + (((/* implicit */int) arr_12 [i_0] [i_1] [i_5])))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned char)149)) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_2] [i_0] [i_6]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(996327679504478975LL)))))))));
                            var_24 ^= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned char) arr_5 [(unsigned char)4] [(unsigned char)4]))), (1044690181U)));
                            var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_18 [i_0 + 1] [i_0 + 3] [i_1 + 1] [i_1]), (arr_18 [i_0 - 1] [i_0] [i_1 + 1] [i_1]))))));
                        }
                        arr_20 [i_0] [i_1] = arr_0 [i_0 + 2];
                    }
                } 
            } 
        } 
        arr_21 [i_0] [i_0] = -4890495412846277109LL;
        arr_22 [i_0 + 1] = ((/* implicit */_Bool) max((((unsigned long long int) (unsigned short)20401)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((unsigned short)65525), (((/* implicit */unsigned short) (_Bool)1))))))))));
        arr_23 [i_0] = ((/* implicit */unsigned long long int) max(((((!(((/* implicit */_Bool) (unsigned char)240)))) ? ((+(3387760859U))) : (((/* implicit */unsigned int) arr_11 [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 1] [(unsigned char)6] [i_0])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1574104330)) ? (((/* implicit */int) (unsigned short)27104)) : (((/* implicit */int) arr_9 [i_0] [i_0 - 1] [i_0 + 3] [i_0 + 1] [i_0 + 1] [i_0])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_7 = 3; i_7 < 24; i_7 += 4) 
        {
            var_26 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) var_11))));
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_9)) : ((-(((/* implicit */int) (unsigned short)20409))))));
            arr_26 [i_0] [i_7 - 2] [(unsigned char)13] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_0] [i_7]))));
        }
        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 3) 
            {
                for (unsigned long long int i_10 = 2; i_10 < 24; i_10 += 1) 
                {
                    for (unsigned int i_11 = 0; i_11 < 25; i_11 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2671986149572243612ULL)) ? (10606102685865960608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63370)))))) ? (arr_1 [i_0 + 3]) : (((/* implicit */int) ((signed char) 3057184335529385498LL))))))));
                            arr_39 [i_0] [i_0] [i_8] [i_9] [i_9] [i_9] [i_11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_19 [i_11] [i_10] [i_9] [i_8] [i_0]))));
                        }
                    } 
                } 
            } 
            var_29 ^= ((/* implicit */short) ((unsigned long long int) (+(1245389614U))));
            arr_40 [i_0] [i_0] = ((/* implicit */unsigned long long int) 3167701306U);
            var_30 = ((/* implicit */short) min((((/* implicit */unsigned char) arr_7 [(_Bool)1])), ((unsigned char)77)));
            /* LoopNest 3 */
            for (long long int i_12 = 0; i_12 < 25; i_12 += 2) 
            {
                for (unsigned int i_13 = 1; i_13 < 24; i_13 += 4) 
                {
                    for (int i_14 = 0; i_14 < 25; i_14 += 4) 
                    {
                        {
                            arr_49 [i_0 + 1] [i_13 - 1] [i_0 + 1] [i_8] [i_0 + 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((_Bool)1) ? (arr_34 [i_13 - 1] [i_13 - 1] [i_12] [i_12] [i_0 + 2]) : (arr_34 [i_13 + 1] [i_13 - 1] [i_13] [i_0] [i_0 - 1]))))));
                            var_31 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) 1245389614U)) ? (((/* implicit */int) (short)26822)) : (((/* implicit */int) arr_16 [i_13 - 1] [i_12] [i_12] [i_12] [i_12] [i_14])))));
                            arr_50 [i_0] [i_8] [i_12] [i_8] [i_14] [i_14] = ((/* implicit */unsigned char) -2670273081774616548LL);
                        }
                    } 
                } 
            } 
        }
    }
}
