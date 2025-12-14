/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45388
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)64280)) ^ (((/* implicit */int) (unsigned short)64280)))))));
        arr_4 [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned int) -2147483629)), (1124161982U)))) ? (((int) arr_2 [i_0])) : ((((-2147483647 - 1)) - (((/* implicit */int) var_0))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_5 [i_1 + 1] [i_2 + 2]), (arr_5 [i_1 + 1] [i_2 + 2])))) ? (((((/* implicit */_Bool) 23U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) (_Bool)1)))))));
                    var_13 = ((/* implicit */unsigned short) ((((long long int) max((var_2), (((/* implicit */long long int) arr_2 [i_0]))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_5 [i_1 + 2] [i_1 - 1])) : (((/* implicit */int) var_9)))))));
                    var_14 = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_1]);
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 - 1]))))))))));
                    var_16 = ((/* implicit */_Bool) (((((!(((/* implicit */_Bool) arr_5 [i_0] [3LL])))) && (((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_5 [i_0] [i_0]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_6 [i_1] [12U] [i_0])) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_7 [i_2] [i_1] [i_0])) : (((/* implicit */int) var_4))))))) : ((-((~(var_7)))))));
                }
            } 
        } 
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) (unsigned short)50991)))))) ? (((unsigned int) ((((/* implicit */_Bool) (short)-15)) ? (-5771836827988270676LL) : (5771836827988270676LL)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) 7463469061720547299ULL)))))))))));
        /* LoopSeq 3 */
        for (int i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((_Bool) arr_1 [i_0])));
            var_18 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((arr_9 [i_0] [i_0]) == (((/* implicit */int) var_3)))))));
            var_19 = ((/* implicit */unsigned int) var_9);
        }
        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            var_20 = ((/* implicit */unsigned long long int) ((1428334956U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50159)))));
            var_21 |= ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_4]))))));
            var_22 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0]))))) >= (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))));
            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) -8456802736719040101LL))))))));
        }
        for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            var_24 = ((/* implicit */int) arr_15 [i_5]);
            var_25 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_5])) ? (((((/* implicit */_Bool) 10983275011989004317ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)16)))) : (((/* implicit */int) var_0))));
            /* LoopNest 2 */
            for (unsigned char i_6 = 1; i_6 < 9; i_6 += 3) 
            {
                for (unsigned short i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    {
                        var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) > ((+(((var_5) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned short) var_8);
                            var_28 |= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_2 [i_5]) / (((/* implicit */unsigned int) ((/* implicit */int) (short)23629)))))) ? (((((/* implicit */_Bool) -5771836827988270676LL)) ? (500422206U) : (((/* implicit */unsigned int) -1688388546)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [(signed char)4])))));
                            var_29 = ((arr_21 [i_0] [i_5] [i_6 + 3]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_0))));
                        }
                        var_30 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_3))));
                    }
                } 
            } 
        }
    }
    for (unsigned long long int i_9 = 2; i_9 < 19; i_9 += 3) 
    {
        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_9])) ? (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2147483618))))), (((unsigned short) 0))))) : ((-(((/* implicit */int) ((arr_29 [i_9]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13443))))))))));
        arr_33 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (arr_31 [i_9 - 1]) : (var_8)))) ? (((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) max(((unsigned short)1500), (var_10))))))));
        arr_34 [i_9] [i_9 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)64034))))) ? (((/* implicit */long long int) (+(arr_31 [i_9 + 1])))) : (((((/* implicit */_Bool) 8455274433540228053LL)) ? (((/* implicit */long long int) 1097794398U)) : (4518079687907297475LL)))));
    }
    for (long long int i_10 = 3; i_10 < 18; i_10 += 4) 
    {
        var_32 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) ((long long int) 140737488093184ULL))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_6))))))));
        var_33 = ((/* implicit */signed char) var_10);
        var_34 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) arr_32 [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_29 [i_10]))))))));
    }
    /* LoopSeq 3 */
    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) /* same iter space */
    {
        var_35 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1817448640)) ? (((/* implicit */unsigned int) -85377901)) : (var_8)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (var_1))) : (((/* implicit */long long int) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_5))))))) / (((long long int) arr_38 [i_11 + 1])));
        var_36 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) -85377902))));
    }
    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) /* same iter space */
    {
        var_37 *= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (arr_40 [i_12] [i_12])))) >= ((~(var_2)))))) < (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1255)))))));
        var_38 &= ((/* implicit */unsigned short) arr_41 [i_12 + 1] [i_12 + 1]);
    }
    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
    {
        var_39 += ((/* implicit */_Bool) (-((((!(((/* implicit */_Bool) (unsigned short)1224)))) ? (-780703113) : (((((-780703107) + (2147483647))) << (((/* implicit */int) var_0))))))));
        var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) != (((unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_7))))));
        arr_48 [i_13] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (unsigned short)64270)), (14436552507518669906ULL)));
        var_41 = ((/* implicit */int) (_Bool)0);
        var_42 = ((/* implicit */int) ((((((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 780703113)))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_10))))) : ((+(arr_39 [i_13 + 1])))));
    }
    var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -85377903)) ? (((/* implicit */int) (unsigned char)52)) : (((/* implicit */int) (unsigned short)64275))))) * (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_8)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))));
}
