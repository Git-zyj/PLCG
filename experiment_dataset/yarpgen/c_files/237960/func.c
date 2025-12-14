/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237960
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
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_11 += ((/* implicit */long long int) ((min((-1505791205), (((/* implicit */int) ((arr_1 [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1])))))))) + ((~(((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 1] [i_0]))))));
            arr_7 [i_1] [i_1] = ((/* implicit */long long int) ((var_8) >= (((/* implicit */long long int) 2147483638))));
        }
        for (unsigned char i_2 = 1; i_2 < 18; i_2 += 3) 
        {
            arr_10 [i_0 - 3] [i_2] = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (arr_3 [i_0 + 1]))), ((((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_9 [i_2] [i_2] [i_2]))) > (((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_9 [i_0] [(unsigned short)20] [i_0])))))));
            var_12 = ((/* implicit */int) (~((-((-(arr_3 [i_0 - 2])))))));
            arr_11 [(unsigned short)4] = ((((((/* implicit */_Bool) ((short) (unsigned char)255))) ? (((((/* implicit */_Bool) var_9)) ? (var_8) : (arr_9 [i_0] [i_2 - 1] [i_2 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)162), (((/* implicit */unsigned char) arr_5 [i_0 + 1] [i_2 + 2])))))))) ^ (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_1 [i_0 + 2])) : (((long long int) arr_4 [i_0] [i_0] [i_2])))));
        }
        arr_12 [i_0] [i_0] = var_8;
        var_13 |= ((/* implicit */unsigned char) min(((~(arr_8 [i_0 - 3] [i_0 - 3]))), (-2136761927)));
    }
    for (signed char i_3 = 3; i_3 < 19; i_3 += 4) /* same iter space */
    {
        var_14 += ((/* implicit */long long int) (((-(((/* implicit */int) ((signed char) var_9))))) != (((/* implicit */int) (short)32763))));
        arr_17 [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_2 [i_3 - 3])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [i_3] [i_3]))) + (var_6)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3 + 2])) ? (((((arr_8 [i_3] [i_3]) + (2147483647))) << (((((/* implicit */int) arr_16 [i_3])) - (19159))))) : (((/* implicit */int) arr_14 [i_3] [i_3])))))));
    }
    var_15 = ((/* implicit */short) (-(((unsigned long long int) (!(((/* implicit */_Bool) var_8)))))));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_9))))) : (((max((var_7), (var_4))) % (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))))));
    /* LoopSeq 4 */
    for (long long int i_4 = 2; i_4 < 21; i_4 += 2) 
    {
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_1) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)76)))))) ? (((((/* implicit */_Bool) (-(var_7)))) ? (arr_19 [i_4] [i_4]) : (((/* implicit */long long int) ((((/* implicit */int) var_3)) | ((-2147483647 - 1))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_4])))));
        /* LoopSeq 3 */
        for (int i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            var_18 = ((/* implicit */signed char) max((var_18), ((signed char)44)));
            arr_24 [i_4 + 1] [4LL] = ((/* implicit */int) var_6);
            arr_25 [i_4] [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_22 [i_4]))));
            var_19 += ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((var_8) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))) > (arr_23 [i_4 - 2]))))) / (((((/* implicit */long long int) (-(-1933132000)))) + ((-(var_4)))))));
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            arr_29 [i_4] [i_6] [10LL] = ((/* implicit */int) max((var_2), (((((/* implicit */_Bool) ((arr_23 [i_4]) << (((arr_18 [i_4]) - (761416037U)))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_19 [i_4 + 1] [i_6 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_21 [(_Bool)1])) >= (((/* implicit */int) var_10))))))))));
            /* LoopNest 2 */
            for (unsigned char i_7 = 3; i_7 < 22; i_7 += 2) 
            {
                for (short i_8 = 0; i_8 < 23; i_8 += 4) 
                {
                    {
                        var_20 = ((/* implicit */long long int) (short)32761);
                        arr_35 [i_4] [i_6] [i_7] [i_8] [17LL] = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) arr_18 [i_7 - 2])), (arr_26 [i_7] [(unsigned char)9] [i_7 - 3]))), (((/* implicit */unsigned long long int) (~((~(var_7))))))));
                    }
                } 
            } 
        }
        for (unsigned char i_9 = 1; i_9 < 19; i_9 += 2) 
        {
            var_21 = (+(min((((/* implicit */long long int) ((short) arr_32 [i_4 + 1] [i_9 + 2] [i_4] [i_9] [i_4 - 1]))), (max((var_1), (((/* implicit */long long int) arr_30 [i_4 + 2] [i_4] [i_9] [i_4])))))));
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_0)), (-886311490801100053LL)))) - (((((/* implicit */_Bool) arr_22 [2ULL])) ? (arr_26 [i_4] [i_9] [4]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))))))))));
        }
    }
    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
    {
        arr_43 [i_10] = ((/* implicit */_Bool) (unsigned char)233);
        arr_44 [i_10 - 1] [i_10] = var_0;
    }
    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
    {
        arr_47 [i_11] = ((/* implicit */short) max((((/* implicit */long long int) (unsigned char)199)), (((((/* implicit */long long int) ((/* implicit */int) arr_42 [i_11 - 1]))) / (arr_41 [i_11 - 1])))));
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (-((~(((((/* implicit */int) arr_45 [i_11])) << (((((/* implicit */int) (unsigned char)255)) - (246))))))))))));
        arr_48 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((arr_42 [i_11]) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_8))))) ? (((((/* implicit */_Bool) -7137906797263770315LL)) ? (-3531080227134959621LL) : (607173149189359953LL))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_42 [i_11 - 1])), ((unsigned char)57)))))));
        var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (9223372036854775807LL) : (var_2)))))) ? ((~(((3599504372U) << (((/* implicit */int) arr_45 [i_11])))))) : (((/* implicit */unsigned int) ((int) -2136761927)))));
    }
    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
    {
        var_25 += ((/* implicit */unsigned char) ((arr_50 [i_12 - 1]) >> (((/* implicit */int) ((unsigned char) -2236070409730363611LL)))));
        /* LoopNest 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 2) 
            {
                {
                    var_26 = ((/* implicit */_Bool) (-(((((_Bool) (unsigned char)113)) ? (((/* implicit */int) (unsigned short)5427)) : (((((var_5) + (2147483647))) >> (((-59059425) + (59059435)))))))));
                    var_27 += ((/* implicit */short) 1933132000);
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) min((((/* implicit */long long int) arr_45 [16])), (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned char)169)))))))));
                    var_29 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (max((var_5), (-281748444))) : ((-(((/* implicit */int) var_0))))))));
                    var_30 -= ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned char) arr_54 [i_12 - 1]))) ? ((-(var_2))) : (((/* implicit */long long int) (-(((/* implicit */int) var_3))))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (unsigned short)64836))))))));
                }
            } 
        } 
        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((long long int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_54 [i_12])) && (var_10)))), ((-(arr_46 [i_12])))))))));
        /* LoopSeq 1 */
        for (int i_15 = 0; i_15 < 24; i_15 += 4) 
        {
            /* LoopNest 3 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (short i_17 = 1; i_17 < 23; i_17 += 2) 
                {
                    for (int i_18 = 3; i_18 < 21; i_18 += 2) 
                    {
                        {
                            arr_68 [i_15] [i_15] [i_16] [i_17 + 1] [i_16] [i_12] [i_17 + 1] = ((/* implicit */unsigned short) ((max((arr_67 [i_12 - 1] [i_18 + 1] [i_16] [i_17] [i_15]), (arr_67 [i_12 - 1] [i_18 - 2] [i_16] [i_18] [i_18]))) < (max((((/* implicit */long long int) 2136761926)), (114688LL)))));
                            var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_63 [23ULL] [(_Bool)1])) || (((/* implicit */_Bool) max((-3899370163941277436LL), (((/* implicit */long long int) -474910194))))))))));
                            arr_69 [i_12] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_57 [i_12 - 1]))) > (arr_61 [i_18 - 1] [i_12 - 1] [19] [21LL]))));
                        }
                    } 
                } 
            } 
            arr_70 [i_12] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (((((-(((/* implicit */int) arr_56 [i_15] [i_15] [i_15])))) + (2147483647))) << (((max((arr_66 [i_12] [i_12] [i_12] [i_12 - 1] [i_15] [i_15] [i_15]), (arr_41 [i_12]))) - (8777133586029944961LL)))))) & (arr_50 [i_12])));
            var_33 = ((/* implicit */long long int) arr_59 [i_12 - 1] [i_15] [i_12 - 1]);
            arr_71 [i_12] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_67 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12] [i_12])) && (((/* implicit */_Bool) -569839022))))), (((((/* implicit */_Bool) arr_40 [i_15])) ? (var_4) : (arr_51 [i_12])))))) ? (((arr_66 [18LL] [i_15] [i_15] [i_12] [i_15] [i_12] [i_12 - 1]) << (((arr_66 [i_15] [(_Bool)1] [i_15] [i_15] [i_15] [i_15] [i_15]) - (487777121285602544LL))))) : (((/* implicit */long long int) var_5))));
        }
    }
}
