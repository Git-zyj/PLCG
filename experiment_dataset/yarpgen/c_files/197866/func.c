/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197866
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
    var_10 = ((/* implicit */unsigned char) (+((+(((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (var_5)))))));
    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)122)) ? (min((5929404735528878833ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4499131251609524516LL)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) (unsigned char)161)))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */signed char) ((((/* implicit */int) (short)-3220)) * ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
        var_13 = ((/* implicit */unsigned char) (signed char)121);
        var_14 = ((/* implicit */unsigned char) (-(max((8449226372296935021ULL), (((/* implicit */unsigned long long int) 1061267372))))));
    }
    for (long long int i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */long long int) arr_4 [i_1])) % (min((((/* implicit */long long int) arr_5 [(unsigned char)2])), (858648844341637657LL)))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) (~((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_0 [i_1] [i_1])))))));
        var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)122))) / (arr_0 [i_1] [i_1])));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            var_17 = ((/* implicit */long long int) ((min((3920178297496990564ULL), (((/* implicit */unsigned long long int) arr_7 [i_1])))) & (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_0)), (arr_10 [i_1] [i_2] [i_1]))))));
            /* LoopNest 3 */
            for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    for (unsigned int i_5 = 1; i_5 < 10; i_5 += 2) 
                    {
                        {
                            var_18 += ((/* implicit */_Bool) arr_16 [i_1] [i_4] [i_3] [i_4] [i_5]);
                            var_19 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_2 [i_5 + 1] [i_5 - 1])) + (2147483647))) << (((((((/* implicit */int) arr_2 [i_5 - 1] [i_2])) + (129))) - (20)))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_6 = 1; i_6 < 10; i_6 += 4) 
            {
                for (signed char i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned char) (+((+(min((((/* implicit */unsigned long long int) var_2)), (arr_14 [i_1] [i_2] [i_6])))))));
                            var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned char) var_1)), (arr_18 [i_8] [i_1] [i_1])));
                            arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((long long int) var_0));
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (-((+((+(((/* implicit */int) (signed char)-102)))))))))));
                        }
                        for (unsigned long long int i_9 = 2; i_9 < 8; i_9 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (-(var_5))))));
                            var_24 = ((/* implicit */unsigned int) min((-1061267367), (((/* implicit */int) (signed char)-98))));
                            arr_27 [i_1] = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_16 [i_9] [i_1] [i_9] [i_9] [i_9 - 1])))) + (((/* implicit */int) ((var_9) && (((/* implicit */_Bool) arr_16 [i_9] [i_1] [i_9] [i_9] [i_9 - 1])))))));
                            var_25 = ((/* implicit */int) var_5);
                        }
                        for (unsigned int i_10 = 0; i_10 < 11; i_10 += 1) 
                        {
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (signed char)87))));
                            var_27 = ((/* implicit */_Bool) (((-(((/* implicit */int) min((((/* implicit */signed char) arr_28 [i_1] [i_2] [i_1] [i_7] [i_7] [i_10])), (var_1)))))) << (((var_2) + (7968242395412345687LL)))));
                            var_28 = ((/* implicit */long long int) min((((/* implicit */short) max((max((arr_23 [i_1] [i_2] [i_1]), ((signed char)54))), (((/* implicit */signed char) arr_29 [i_1] [i_7] [i_1] [i_6] [i_2] [i_1]))))), (min((((/* implicit */short) arr_19 [i_1] [i_7] [i_6] [i_2] [i_1])), (var_3)))));
                            var_29 = arr_25 [i_2] [i_1] [i_2] [i_2] [i_6 - 1];
                        }
                        var_30 = ((/* implicit */signed char) min(((~(((/* implicit */int) ((var_4) <= (((/* implicit */unsigned int) 947579731))))))), (((/* implicit */int) (!(((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_5)))))))));
                        var_31 = ((/* implicit */_Bool) (unsigned short)13045);
                        var_32 = (_Bool)0;
                    }
                } 
            } 
            var_33 = ((/* implicit */int) max(((~(var_4))), ((~(3257924672U)))));
            /* LoopNest 3 */
            for (unsigned char i_11 = 1; i_11 < 8; i_11 += 4) 
            {
                for (long long int i_12 = 2; i_12 < 10; i_12 += 3) 
                {
                    for (long long int i_13 = 2; i_13 < 8; i_13 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned char) var_2);
                            var_35 &= ((/* implicit */signed char) arr_35 [i_1] [i_2] [i_11] [i_11 + 3]);
                            var_36 = ((/* implicit */long long int) ((unsigned char) (signed char)122));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            arr_43 [i_14] [i_1] [i_1] = ((/* implicit */long long int) ((min((((/* implicit */int) min((arr_5 [i_1]), (((/* implicit */short) arr_30 [i_14] [i_1] [i_1] [i_1] [i_1]))))), ((-(((/* implicit */int) (signed char)101)))))) / (var_6)));
            /* LoopSeq 1 */
            for (unsigned int i_15 = 0; i_15 < 11; i_15 += 3) 
            {
                var_37 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_42 [i_1] [i_1])))))) < (arr_41 [i_1])))) < ((~(((/* implicit */int) arr_9 [i_1] [(unsigned char)4] [i_15]))))));
                var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1] [i_14])) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_1] [i_14] [i_15])))))));
                var_39 += ((/* implicit */unsigned char) (((+(min((var_5), (var_4))))) << (((((((/* implicit */_Bool) arr_14 [i_15] [i_1] [i_1])) ? (arr_14 [i_15] [i_14] [i_1]) : (arr_14 [i_1] [i_1] [i_1]))) - (16938019546275971696ULL)))));
                /* LoopSeq 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    arr_50 [(_Bool)1] &= ((/* implicit */signed char) (~(((max((((/* implicit */int) var_0)), (var_6))) << (((arr_46 [i_15] [i_15] [i_15] [i_1]) - (4248593641U)))))));
                    var_40 ^= ((/* implicit */unsigned char) ((_Bool) var_8));
                }
                for (unsigned char i_17 = 0; i_17 < 11; i_17 += 3) 
                {
                    var_41 = ((/* implicit */_Bool) (signed char)92);
                    var_42 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_14]))))) ? (min((((/* implicit */unsigned int) arr_16 [i_1] [i_1] [i_1] [i_15] [i_17])), (var_5))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_17] [i_1] [i_14] [i_1] [i_1])) % (((/* implicit */int) arr_16 [i_1] [i_1] [i_15] [i_14] [i_1]))))));
                    var_43 = ((/* implicit */signed char) var_5);
                    var_44 = ((/* implicit */int) (~(max((((((/* implicit */_Bool) (short)-31220)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1] [i_1] [i_17]))) : (var_5))), (((unsigned int) var_0))))));
                    /* LoopSeq 2 */
                    for (signed char i_18 = 0; i_18 < 11; i_18 += 3) /* same iter space */
                    {
                        var_45 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_33 [i_14] [i_15] [i_1])), (arr_53 [i_18] [i_17] [i_1] [i_1] [i_1] [i_1])))) && (((((/* implicit */_Bool) -8476859470997504572LL)) || (((/* implicit */_Bool) -9223372036854775807LL))))));
                        arr_56 [i_18] [i_1] [i_15] [i_15] [i_14] [i_1] [i_1] = ((/* implicit */unsigned short) (+(arr_34 [i_1] [i_1] [i_1] [i_1])));
                    }
                    for (signed char i_19 = 0; i_19 < 11; i_19 += 3) /* same iter space */
                    {
                        var_46 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_1] [i_14]))))) + (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_40 [i_1] [i_14] [i_15])), (arr_38 [i_1] [i_14] [i_19])))) ? (((((/* implicit */_Bool) 10636348043191073782ULL)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
                        arr_59 [i_1] = ((/* implicit */unsigned char) arr_52 [i_1] [i_1]);
                        var_47 += ((/* implicit */signed char) ((arr_53 [10U] [i_14] [(signed char)4] [i_14] [i_14] [i_14]) + (var_4)));
                        var_48 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_7))) - ((-(((/* implicit */int) var_9))))))) ? (var_6) : ((+(((/* implicit */int) arr_2 [i_15] [i_15]))))));
                    }
                }
            }
        }
        var_49 = ((/* implicit */short) (-(((((/* implicit */long long int) ((unsigned int) arr_38 [i_1] [i_1] [i_1]))) & ((-(var_2)))))));
    }
}
