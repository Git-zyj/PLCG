/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198453
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
    var_13 = ((5305883995652178685LL) > (4398046511104LL));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((-5305883995652178690LL) ^ (5305883995652178685LL))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            var_14 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (-(4398046511116LL))))));
            arr_8 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((var_10) + (2147483647))) << (((((arr_7 [i_0]) + (7607944598034020338LL))) - (20LL)))))) ^ (max((var_1), (3509333163U)))))) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))))) : (max((((/* implicit */long long int) arr_5 [i_1] [i_1 + 1])), (4398046511095LL))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) /* same iter space */
        {
            arr_11 [4U] [4U] [4U] = ((/* implicit */_Bool) ((((/* implicit */int) ((arr_9 [i_0] [i_2]) < (var_12)))) | (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)23))) <= (var_3))))));
            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((var_2), (((/* implicit */int) arr_10 [i_2] [i_2] [i_0]))));
            var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 5305883995652178685LL))));
            arr_13 [i_0] [i_2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_6 [i_2]))) || (((/* implicit */_Bool) arr_6 [i_2]))));
            var_17 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) -5305883995652178679LL)) || (((/* implicit */_Bool) arr_10 [i_0] [12ULL] [i_2])))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) /* same iter space */
        {
            arr_16 [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_0]))))) & (((((/* implicit */_Bool) (unsigned char)115)) ? (1625722069191869660ULL) : (((/* implicit */unsigned long long int) 4398046511121LL))))));
            var_18 = max((-5305883995652178698LL), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4398046511127LL)) || (((/* implicit */_Bool) -4398046511104LL)))))) <= (1625722069191869652ULL)))));
        }
    }
    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) var_6);
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((min((((/* implicit */unsigned long long int) ((-4398046511115LL) > (-5305883995652178674LL)))), (((((/* implicit */_Bool) arr_17 [(unsigned short)10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (9381830915057529315ULL))))) + (((/* implicit */unsigned long long int) var_2))))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 3; i_7 < 18; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 2; i_8 < 17; i_8 += 3) 
                        {
                            {
                                arr_31 [i_4] [i_7 + 1] [i_4] [i_4] [i_5] [(unsigned char)12] = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned short) var_7))), ((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_18 [i_4])) : (var_2)))))));
                                arr_32 [i_4] [i_5] [i_5] [8U] [8U] [i_5] [i_4] &= ((/* implicit */signed char) (-(((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)0))))) | (-4398046511106LL)))));
                            }
                        } 
                    } 
                    arr_33 [i_4] [i_5] [i_6] [i_6] = ((/* implicit */unsigned char) var_7);
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (signed char i_9 = 2; i_9 < 22; i_9 += 1) 
    {
        for (unsigned int i_10 = 2; i_10 < 23; i_10 += 1) 
        {
            {
                arr_38 [(signed char)16] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1125253503)) ? (4398046511104LL) : (-4398046511085LL)))) || (((/* implicit */_Bool) -4398046511124LL))));
                /* LoopNest 3 */
                for (unsigned int i_11 = 0; i_11 < 25; i_11 += 3) 
                {
                    for (signed char i_12 = 0; i_12 < 25; i_12 += 1) 
                    {
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((var_8) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_13 - 1] [i_10 - 1] [i_9 + 1]))))))) < (((-5305883995652178686LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7)))))));
                                var_22 &= ((/* implicit */unsigned char) ((unsigned short) max((arr_43 [18U] [i_13 - 1] [i_10 + 2]), (var_6))));
                                arr_45 [6ULL] [6ULL] &= ((/* implicit */signed char) 2702126841706231616ULL);
                                arr_46 [i_9] [i_9] [i_9] [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) -4398046511104LL);
                            }
                        } 
                    } 
                } 
                arr_47 [(signed char)6] &= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) -4398046511088LL)) ? (828306237U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) var_7);
}
