/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35514
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [5U] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_1 + 4])) : (((/* implicit */int) arr_6 [i_3] [i_0]))))));
                                arr_15 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_3] [i_4])) ? (((/* implicit */int) (unsigned short)18167)) : (((/* implicit */int) (unsigned short)15542)))) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1]))));
                                arr_16 [i_0] [i_1] [i_1] [i_1] [(unsigned short)17] = ((unsigned short) ((((/* implicit */_Bool) (unsigned short)15526)) ? (((/* implicit */int) (unsigned short)15534)) : (((/* implicit */int) (unsigned char)32))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1 - 1] [i_0] [(unsigned short)13] [i_1 + 3]))) ^ (((((/* implicit */_Bool) (unsigned short)15542)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44248))) : (arr_0 [i_1])))));
                }
                /* LoopSeq 2 */
                for (unsigned short i_5 = 2; i_5 < 20; i_5 += 1) 
                {
                    var_19 = ((/* implicit */unsigned int) (unsigned short)15547);
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 261120U)))))))) ? (140737488224256LL) : (((/* implicit */long long int) (-(min((arr_11 [i_0] [(unsigned short)3] [(unsigned char)7] [i_1 + 1]), (((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_5 + 1] [i_5] [i_5])))))))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_4 [i_0 + 1] [i_1 + 3]))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)55150)) - (((/* implicit */int) arr_2 [i_0]))))) ? (arr_0 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [(unsigned short)4] [(signed char)3]))))) : (((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) arr_18 [i_0 - 1] [i_0] [(unsigned short)6] [(unsigned short)19]))), (((((/* implicit */_Bool) 700103622U)) ? (((/* implicit */int) (unsigned short)55146)) : (((/* implicit */int) (unsigned short)12288)))))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
                    {
                        arr_22 [(unsigned short)14] [i_1] [i_0] [i_6] = ((/* implicit */long long int) (unsigned short)18013);
                        var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)14761))))), (max((arr_11 [i_6] [i_6] [i_6] [i_6]), (((/* implicit */unsigned int) arr_10 [i_0] [i_1 + 1] [13LL] [13LL]))))))) - (((min((((/* implicit */long long int) arr_20 [i_6] [i_5 - 2] [i_5] [i_1] [i_0 - 1] [i_0])), (2211386410898895946LL))) - (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned short) (+(746177732708873163LL)));
                        var_24 = (-(arr_9 [i_0 + 1] [i_0 + 1] [i_1 + 3] [i_5 + 1]));
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_7] [19U]))))))))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 21; i_8 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)72)), ((unsigned short)18483))))))));
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) min(((~(((((/* implicit */_Bool) (unsigned short)62514)) ? (-4109885122996543443LL) : (-4605665911320616369LL))))), (((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)192)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) (unsigned short)50770)))), ((+(((/* implicit */int) (unsigned short)6519))))))))))));
                        var_28 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_13 [i_0] [i_0] [i_0 + 1] [i_8] [i_0] [i_0]))));
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_23 [i_5 + 1] [i_5 + 1]) - (arr_23 [i_5 - 2] [i_5 - 2])))) ? (((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)65535)))) - (((((/* implicit */_Bool) arr_10 [i_0] [i_1 - 1] [i_5] [i_5])) ? (((/* implicit */int) arr_10 [(unsigned short)9] [i_0] [i_0] [(unsigned short)10])) : (((/* implicit */int) (unsigned char)31)))))) : ((((-(((/* implicit */int) (signed char)-123)))) * (((((/* implicit */int) (unsigned short)761)) % (((/* implicit */int) (unsigned char)3))))))));
                    }
                    arr_27 [i_0 + 1] [i_0 + 1] [i_5 - 1] [i_0] = ((/* implicit */long long int) arr_26 [(signed char)9] [20LL] [i_1 + 3] [(signed char)9]);
                }
                for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) 
                {
                    var_30 ^= ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)48224)) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_9] [(unsigned short)8] [i_9] [i_9])))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)19)) - (((/* implicit */int) arr_29 [(unsigned short)2] [i_1] [i_1] [(unsigned char)2]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50005))) : (4022087133300780438LL)))));
                    /* LoopNest 2 */
                    for (signed char i_10 = 1; i_10 < 20; i_10 += 3) 
                    {
                        for (long long int i_11 = 0; i_11 < 21; i_11 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((5387172670955322996LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14761))))))));
                                var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((unsigned int) min((arr_5 [i_0 - 1]), (((/* implicit */unsigned short) (signed char)-25))))))));
                                var_33 = ((/* implicit */unsigned char) (unsigned short)45986);
                                var_34 = ((/* implicit */signed char) 3936808259U);
                                arr_37 [i_11] [(unsigned short)8] [i_11] [i_0] [i_11] [i_11] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (+((-(((/* implicit */int) arr_1 [i_9] [i_11]))))))), (((((/* implicit */_Bool) (+(603782062109814199LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)56724)) ? (((/* implicit */int) (unsigned short)17991)) : (((/* implicit */int) (signed char)32))))) : (5387172670955323009LL)))));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */unsigned char) arr_18 [i_0 + 1] [i_0] [(unsigned char)10] [i_0 + 1]);
                    var_36 += ((/* implicit */unsigned char) ((unsigned int) min((arr_19 [(unsigned short)10] [20U]), (((/* implicit */long long int) (unsigned short)20168)))));
                    var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)45350)) || (((/* implicit */_Bool) arr_31 [(unsigned short)16] [(unsigned short)16] [i_0 - 1] [i_0 - 1]))))), (((unsigned char) arr_30 [i_0] [i_1] [i_9]))))) ? (min((((/* implicit */unsigned int) arr_30 [i_0] [i_0] [i_9])), (((unsigned int) arr_32 [i_0] [i_0] [i_1] [i_9])))) : (((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_9]))))), ((~(((/* implicit */int) (signed char)-32)))))))));
                }
                arr_38 [i_0] = ((/* implicit */unsigned int) (((+(min((arr_0 [i_1]), (((/* implicit */long long int) arr_5 [i_0])))))) ^ (((((/* implicit */_Bool) arr_17 [i_0 - 1] [i_0 - 1])) ? (arr_17 [i_0 - 1] [i_0 + 1]) : (arr_17 [i_0 - 1] [i_0 - 1])))));
                /* LoopNest 2 */
                for (long long int i_12 = 1; i_12 < 18; i_12 += 4) 
                {
                    for (unsigned short i_13 = 0; i_13 < 21; i_13 += 3) 
                    {
                        {
                            var_38 = (~(max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0 - 1] [i_0 + 1] [i_0])) || (((/* implicit */_Bool) arr_10 [i_0] [i_1 + 4] [i_0] [i_13]))))), ((+(arr_9 [i_0] [i_0] [(unsigned short)3] [0U]))))));
                            var_39 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(arr_44 [i_12 - 1] [i_0] [i_12] [i_12 + 1] [i_12] [i_12 + 2])))) * (((((/* implicit */_Bool) ((signed char) (signed char)-121))) ? (((/* implicit */long long int) arr_43 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0])) : ((+(arr_23 [i_0 - 1] [i_0 - 1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_40 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
    /* LoopNest 3 */
    for (unsigned short i_14 = 1; i_14 < 19; i_14 += 1) 
    {
        for (unsigned short i_15 = 2; i_15 < 21; i_15 += 3) 
        {
            for (unsigned int i_16 = 0; i_16 < 23; i_16 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_17 = 1; i_17 < 22; i_17 += 2) 
                    {
                        for (signed char i_18 = 0; i_18 < 23; i_18 += 4) 
                        {
                            {
                                var_41 = ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) min((arr_56 [i_14] [i_15] [i_14] [i_14 + 4] [(unsigned short)13]), (arr_56 [i_14] [i_15] [i_16] [i_17 - 1] [i_18])))))));
                                var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) ((long long int) (unsigned short)57344)))));
                            }
                        } 
                    } 
                    var_43 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)45976))));
                    arr_61 [i_15] = (unsigned short)54838;
                }
            } 
        } 
    } 
    var_44 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)3968)) && (((/* implicit */_Bool) var_5))))) % (((/* implicit */int) (unsigned short)59594)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 358159041U))))))));
}
