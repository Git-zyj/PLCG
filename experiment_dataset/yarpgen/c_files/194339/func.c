/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194339
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
    var_11 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((unsigned short) 290271377U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(361637130U)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((-2742797269885919594LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)120)))))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)120))) + (arr_1 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)166))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */short) (~(((arr_0 [1LL]) >> (((1518945066580417388ULL) - (1518945066580417385ULL)))))));
            arr_7 [i_1] = ((arr_1 [i_0] [i_1]) ^ (((/* implicit */long long int) 4294967279U)));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_12 [i_3] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(3933330166U)))) / (-2742797269885919597LL)));
                        arr_13 [(short)3] [i_1] [i_2] [i_3] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)57069)) ? (2742797269885919594LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)112)))));
                        var_13 = ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [1]);
                    }
                } 
            } 
        }
        for (int i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            arr_16 [i_0] [i_0] = ((/* implicit */_Bool) arr_14 [i_0] [i_4]);
            arr_17 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_0 [i_4])) - (0ULL)));
        }
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0]))) + (1529162893620825074LL)));
    }
    for (short i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) ((((arr_18 [i_5]) >= (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 3994966997153229827ULL)) || (((/* implicit */_Bool) 7078291958160880753LL))))) : (((/* implicit */int) (signed char)112))));
        var_16 *= ((/* implicit */short) -7078291958160880754LL);
        var_17 = var_1;
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 3) 
        {
            var_18 = arr_21 [i_6];
            var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_18 [i_7]))));
        }
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((arr_21 [i_6]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [0U])))))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-122)) <= (((/* implicit */int) (unsigned char)3))));
    }
    for (short i_8 = 0; i_8 < 14; i_8 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) (+(7078291958160880753LL)));
        var_23 = ((/* implicit */unsigned char) (((~(((/* implicit */int) (unsigned short)3704)))) | (((/* implicit */int) (short)3857))));
        arr_27 [i_8] [i_8] = min(((-((+(5237172779868863781ULL))))), (((/* implicit */unsigned long long int) arr_25 [i_8] [i_8])));
    }
}
