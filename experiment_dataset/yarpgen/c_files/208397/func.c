/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208397
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
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((3452931217469644140LL), (((/* implicit */long long int) var_8))))) ? (((/* implicit */int) var_17)) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12)))))), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))))));
    var_19 *= ((/* implicit */short) (((!(((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)25)), (-839480817647332440LL)))))) ? (((long long int) var_15)) : (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_12)), (var_6)))) / (((/* implicit */int) ((var_3) < (((/* implicit */long long int) 23U))))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_0])), (arr_0 [i_0] [i_0])))) ? (((/* implicit */int) min(((unsigned short)65533), (var_6)))) : (((/* implicit */int) ((arr_0 [i_0] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) var_13)))))))))));
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((signed char) ((arr_0 [i_1 - 1] [i_1]) != (arr_0 [i_1 + 1] [7LL])))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_22 *= ((/* implicit */unsigned char) ((((long long int) ((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-3452931217469644140LL)))) + (((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))) / (var_5))) - ((-(0LL)))))));
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-14789)) ? (arr_8 [i_1 + 2] [i_1 - 2]) : (arr_8 [i_1 - 2] [i_1 + 2])))), (min((((/* implicit */long long int) (unsigned char)235)), (-3452931217469644135LL))))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */short) var_5);
            var_25 |= ((((((/* implicit */_Bool) min((((/* implicit */long long int) (short)18794)), (-3452931217469644152LL)))) && (((/* implicit */_Bool) var_15)))) || (((((((/* implicit */_Bool) (signed char)8)) || ((_Bool)1))) && (((/* implicit */_Bool) 8388607U)))));
            var_26 = ((/* implicit */int) min((var_26), ((~(((/* implicit */int) ((short) ((unsigned int) var_13))))))));
        }
        arr_9 [(unsigned short)8] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_2 [i_0]))))) == (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0])))))) : ((~(var_5)))))));
        var_27 = ((((((/* implicit */_Bool) var_15)) ? (arr_0 [3LL] [i_0]) : (arr_0 [i_0] [(short)1]))) % (((/* implicit */long long int) ((((/* implicit */_Bool) 4107089176575010369LL)) ? (4286578689U) : (0U)))));
    }
    for (long long int i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
    {
        arr_13 [i_4] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */int) arr_4 [i_4])) : (((/* implicit */int) arr_4 [i_4]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_4 [i_4]))))));
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            arr_17 [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) ((max((((/* implicit */long long int) var_6)), (arr_12 [10LL] [i_4]))) / (((8558665425978372564LL) << (((((((/* implicit */int) (short)-32016)) + (32045))) - (29))))))))));
            var_28 *= ((/* implicit */_Bool) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (905417775122434923ULL))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_4] [i_5])) || (((/* implicit */_Bool) (short)22))))) : (min((((/* implicit */int) var_13)), (224))))) - (((((/* implicit */int) arr_6 [i_5] [i_4])) << (((((/* implicit */int) arr_1 [i_4])) + (101)))))));
        }
    }
    for (long long int i_6 = 0; i_6 < 19; i_6 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            var_29 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 17541326298587116696ULL)))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)-28347))));
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (short i_9 = 0; i_9 < 19; i_9 += 3) 
                {
                    {
                        arr_30 [i_6] [i_6] [i_8] [i_8] = var_9;
                        var_30 -= ((/* implicit */unsigned short) (~(((/* implicit */int) (!((_Bool)1))))));
                    }
                } 
            } 
        }
        for (unsigned char i_10 = 0; i_10 < 19; i_10 += 4) 
        {
            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) var_5))));
            var_32 *= ((/* implicit */short) max((min((((/* implicit */unsigned int) -2097152)), (max((((/* implicit */unsigned int) (short)0)), (4286578717U))))), (((/* implicit */unsigned int) min((arr_26 [i_10]), (((/* implicit */unsigned short) arr_23 [i_6] [i_10])))))));
        }
        var_33 = ((/* implicit */unsigned int) min((min((((((/* implicit */int) var_7)) >> (((((/* implicit */int) arr_21 [i_6] [i_6])) - (153))))), (((/* implicit */int) arr_15 [i_6])))), (((/* implicit */int) ((((/* implicit */_Bool) -1255532071)) || (((/* implicit */_Bool) var_6)))))));
    }
}
