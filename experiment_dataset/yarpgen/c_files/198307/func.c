/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198307
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
    var_20 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_17)) & (((/* implicit */int) var_17)))))))) > (((/* implicit */int) (((+(var_10))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_7)) == (var_9)))))))));
    /* LoopSeq 4 */
    for (int i_0 = 3; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_21 ^= ((/* implicit */unsigned int) ((((((var_4) + (((/* implicit */int) (unsigned char)0)))) - (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (signed char)45)))))) + ((+((-(((/* implicit */int) arr_1 [i_0] [i_0]))))))));
        arr_2 [i_0 - 1] = ((/* implicit */unsigned long long int) (~(-3994701980876378903LL)));
    }
    for (int i_1 = 3; i_1 < 18; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1 + 2] = (~(((/* implicit */int) (unsigned char)186)));
        var_22 ^= ((((/* implicit */int) (signed char)43)) >= (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_2 = 1; i_2 < 19; i_2 += 4) 
        {
            arr_8 [i_1] = ((/* implicit */short) (~((+(((/* implicit */int) arr_1 [i_2 - 1] [i_1]))))));
            var_23 = (((~(((/* implicit */int) (short)31)))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(short)11] [(short)7]))))));
        }
        for (int i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
        {
            arr_12 [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) 711480714)) && (((/* implicit */_Bool) (signed char)25)))))))) >= ((((((+(var_11))) + (9223372036854775807LL))) << ((((((-(arr_6 [i_1] [i_1]))) + (856678360))) - (44)))))));
            /* LoopNest 3 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (signed char i_5 = 2; i_5 < 17; i_5 += 3) 
                {
                    for (signed char i_6 = 1; i_6 < 18; i_6 += 1) 
                    {
                        {
                            arr_20 [i_5 - 1] [i_5 - 1] [(unsigned char)12] [i_5] [i_1 + 2] [i_3] [i_4] |= ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) ((arr_9 [i_4 - 1]) == (((/* implicit */unsigned int) var_4)))))))) > ((-(((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_5] [i_3]))) ^ (-7879435841200348553LL)))))));
                            arr_21 [5] [i_3] [i_4 - 1] [i_5 + 3] [i_3] [i_6] = ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)62)))))))) == ((~((~(-2044439250))))));
                            var_24 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)129)) + (((/* implicit */int) var_17)))))))));
                            arr_22 [i_1] [i_1 - 3] [i_3] [i_1 - 3] [16U] = ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-1)))))))) + (((/* implicit */int) (!(((var_7) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249)))))))));
                            arr_23 [(_Bool)1] [(_Bool)1] [i_3] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (short)28))))) > (((((/* implicit */long long int) (-(4039647067U)))) * (((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4] [i_6]))) / (var_9)))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 20; i_7 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) == (((var_6) << (((((/* implicit */int) var_0)) - (23)))))));
            var_26 *= ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)-52)) + (2147483647))) << ((((-(-670605241))) - (670605241)))));
            arr_27 [i_7] = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_4 [i_7] [9ULL])) + (((/* implicit */int) arr_3 [i_7]))))));
        }
    }
    /* vectorizable */
    for (int i_8 = 3; i_8 < 18; i_8 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((arr_10 [i_8] [(signed char)0]) << (((((/* implicit */int) var_14)) - (17522)))))) < (((((/* implicit */unsigned long long int) 3605062859U)) * (14380885769825954874ULL)))));
        arr_30 [(_Bool)1] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((711707733) != (((/* implicit */int) (unsigned char)7)))))));
        var_28 ^= ((/* implicit */short) (((+(((/* implicit */int) var_0)))) >> ((((~(((/* implicit */int) var_17)))) + (31)))));
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
            {
                {
                    arr_36 [i_8] [i_9] [i_10] |= ((/* implicit */unsigned char) ((((621203071) << (((arr_17 [(_Bool)1] [i_8] [i_9] [(short)14] [i_10]) - (12676187319242884790ULL))))) + (((/* implicit */int) ((var_3) == (((/* implicit */long long int) ((/* implicit */int) var_17))))))));
                    arr_37 [i_8] [i_8 + 2] [i_8 + 2] = ((/* implicit */_Bool) (((-(((/* implicit */int) (short)-22626)))) / ((-(arr_6 [i_9] [i_9])))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        arr_40 [i_11] [i_11] = ((/* implicit */short) (~((-(arr_28 [i_11] [(_Bool)1])))));
        arr_41 [i_11] = ((/* implicit */int) (((~(var_15))) ^ (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)219)))))));
        arr_42 [(signed char)10] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(var_10))))));
    }
}
