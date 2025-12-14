/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195013
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
    var_12 = ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) min((var_2), ((unsigned char)55)))), (max((((/* implicit */unsigned long long int) var_8)), (var_9))))));
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((unsigned short) (unsigned char)150))))) : (min((((/* implicit */long long int) min((((/* implicit */unsigned short) (unsigned char)201)), ((unsigned short)3831)))), (((long long int) 8948317831666673115ULL))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */int) ((unsigned long long int) (unsigned char)207));
                arr_5 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min(((-(var_4))), (((/* implicit */unsigned int) ((signed char) (unsigned char)255)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -139001358)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_4 [i_1]))))))))) : (min((((long long int) var_6)), (((/* implicit */long long int) ((unsigned char) (unsigned char)201)))))));
                var_15 = ((/* implicit */short) arr_3 [i_0]);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_2 = 1; i_2 < 17; i_2 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned long long int) max(((-2147483647 - 1)), (((/* implicit */int) (short)1468))));
        arr_10 [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_6 [i_2])), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */int) arr_9 [(signed char)17] [i_2 + 1]))))) / (((arr_6 [i_2 + 1]) ? (var_6) : (((/* implicit */unsigned int) -1020221455))))))));
    }
    for (signed char i_3 = 1; i_3 < 17; i_3 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) max((var_17), (((arr_6 [i_3]) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)60))))) : ((+(((arr_11 [i_3] [i_3]) >> (((arr_13 [i_3] [i_3]) - (4628017059709800131ULL)))))))))));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            for (unsigned short i_5 = 1; i_5 < 18; i_5 += 1) 
            {
                {
                    arr_20 [i_3] [i_4] [i_3] = ((/* implicit */signed char) ((unsigned int) min((min((((/* implicit */long long int) var_1)), (3929879465236345764LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_13 [14] [i_4]))))))));
                    var_18 = (signed char)-23;
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((-4850585828594768437LL) ^ (-2806865876959648068LL))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 19; i_7 += 3) 
            {
                for (long long int i_8 = 0; i_8 < 19; i_8 += 3) 
                {
                    {
                        arr_29 [i_3] [i_6] [i_7] [i_6] [i_8] [3ULL] = ((/* implicit */short) arr_12 [i_3]);
                        arr_30 [i_3] [i_6] [i_3] [i_8] = ((/* implicit */long long int) (unsigned char)60);
                    }
                } 
            } 
            var_20 *= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (unsigned char)203)) : (((/* implicit */int) (unsigned char)241))))));
        }
    }
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 1591173315U)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3152863492U)) ? (2941751471U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_10))))) : (((int) var_7))));
}
