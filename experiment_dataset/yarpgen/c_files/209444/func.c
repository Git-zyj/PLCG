/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209444
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((long long int) ((long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) 3940269606U)) : (4532645357272578602LL)))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)252)) || (((/* implicit */_Bool) (unsigned short)14055))));
        var_18 = ((/* implicit */_Bool) max((max((6310053334796577169LL), (((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) var_2))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)206)) ? (((/* implicit */int) var_1)) : (arr_0 [i_0]))))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_7))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                var_20 = ((/* implicit */_Bool) min(((unsigned short)15514), (((/* implicit */unsigned short) (unsigned char)229))));
                var_21 = ((/* implicit */short) min(((-((+(((/* implicit */int) var_16)))))), (((((/* implicit */_Bool) max((var_9), (((/* implicit */short) var_14))))) ? (((/* implicit */int) var_17)) : (((((/* implicit */int) (unsigned char)21)) + (((/* implicit */int) var_0))))))));
            }
            /* vectorizable */
            for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                arr_14 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned char) var_3));
                arr_15 [i_2] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)49)) || (((/* implicit */_Bool) 1427926214U))));
                var_22 = ((((/* implicit */_Bool) (short)22614)) || (((/* implicit */_Bool) (unsigned char)229)));
            }
            arr_16 [i_1] [i_2] [i_2] = (+(((((/* implicit */_Bool) arr_8 [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((/* implicit */long long int) ((/* implicit */int) (short)-2623))) / (arr_8 [i_1] [i_2]))))));
            arr_17 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) arr_1 [i_2]);
        }
        for (unsigned short i_5 = 4; i_5 < 8; i_5 += 3) 
        {
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)207)) ? (-5270475144568724293LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    {
                        arr_26 [i_1] [i_1] [i_5 - 1] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) ((unsigned int) (_Bool)1))), (((((/* implicit */_Bool) arr_12 [i_1])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) == (((((((/* implicit */_Bool) var_4)) ? (var_15) : (((/* implicit */long long int) arr_12 [i_5])))) * (((/* implicit */long long int) min((var_10), (((/* implicit */unsigned int) arr_7 [i_1] [1ULL] [i_1])))))))));
                        arr_27 [i_1] [i_5] [i_5] [i_1] [i_6] [5] = arr_20 [i_1];
                        var_24 = ((/* implicit */_Bool) arr_18 [i_6] [i_5]);
                        arr_28 [i_7] [i_1] [(unsigned char)7] [i_1] [i_6] [i_1] = ((/* implicit */int) (+(max((((/* implicit */unsigned long long int) arr_12 [i_7])), (min((2156945193365342738ULL), (((/* implicit */unsigned long long int) -4923924166412764705LL))))))));
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned char) ((-5270475144568724307LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)18)))));
            arr_29 [i_1] [i_5] [i_5 - 4] = ((/* implicit */_Bool) var_9);
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_8 = 1; i_8 < 8; i_8 += 2) 
        {
            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_4 [i_8] [i_8 - 1])) : (((/* implicit */int) (unsigned short)32242)))))));
            var_27 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-4278)) ? (var_15) : (arr_11 [2])));
        }
        /* vectorizable */
        for (unsigned short i_9 = 4; i_9 < 8; i_9 += 3) 
        {
            var_28 = ((/* implicit */unsigned int) ((signed char) var_12));
            arr_38 [i_1] = ((/* implicit */int) var_12);
            var_29 *= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_36 [i_1] [i_9] [i_9 + 2]))));
            arr_39 [(signed char)5] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)7))));
        }
        var_30 ^= ((/* implicit */unsigned char) 644054441U);
    }
    for (signed char i_10 = 0; i_10 < 10; i_10 += 3) /* same iter space */
    {
        arr_43 [i_10] [i_10] = ((/* implicit */long long int) (~((+(((/* implicit */int) arr_40 [i_10]))))));
        arr_44 [i_10] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (-(arr_25 [i_10] [i_10] [i_10])))), (((long long int) ((unsigned char) var_15)))));
        var_31 = ((/* implicit */int) max((var_31), (arr_12 [i_10])));
        var_32 = ((/* implicit */long long int) 1816634635922854304ULL);
    }
    var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((((/* implicit */_Bool) (~(1402569934U)))) ? (max(((-(var_13))), (((-5739096989524770644LL) + (5270475144568724317LL))))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)50))))))))));
    var_34 = var_7;
    var_35 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_13))) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    /* LoopSeq 1 */
    for (unsigned char i_11 = 0; i_11 < 19; i_11 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_12 = 3; i_12 < 15; i_12 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_13 = 4; i_13 < 16; i_13 += 1) 
            {
                for (long long int i_14 = 3; i_14 < 16; i_14 += 1) 
                {
                    {
                        var_36 = ((/* implicit */short) max((min((arr_45 [2]), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) (_Bool)0))));
                        var_37 &= ((/* implicit */_Bool) var_2);
                        /* LoopSeq 2 */
                        for (unsigned int i_15 = 0; i_15 < 19; i_15 += 4) /* same iter space */
                        {
                            arr_58 [i_15] = max(((unsigned char)204), (((/* implicit */unsigned char) min((arr_56 [i_11] [i_11] [i_11] [i_11] [i_11]), (arr_56 [i_11] [i_12 + 3] [i_11] [i_14] [i_15])))));
                            var_38 = ((/* implicit */unsigned short) (!(((_Bool) (-(((/* implicit */int) arr_52 [i_11] [i_11] [i_11] [i_11] [i_11])))))));
                            var_39 = ((/* implicit */short) arr_49 [i_11]);
                        }
                        for (unsigned int i_16 = 0; i_16 < 19; i_16 += 4) /* same iter space */
                        {
                            arr_61 [(_Bool)1] [(unsigned short)7] [i_13] [i_14 - 2] [i_16] = ((max((((/* implicit */int) (signed char)-66)), ((~(((/* implicit */int) (unsigned short)23552)))))) < (((/* implicit */int) max((arr_54 [i_12 - 3] [i_12] [i_12] [i_13]), (arr_54 [i_12 + 1] [(short)18] [i_12] [i_12])))));
                            var_40 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)198))))) ? (7654496382800979431LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                            var_41 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 3474160907U))));
                        }
                        arr_62 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */short) max((1816634635922854303ULL), (16630109437786697290ULL)));
                        arr_63 [i_13 - 3] [i_13 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : ((+(arr_55 [17LL] [i_13 + 1] [i_13] [i_13] [i_12] [i_12])))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_17 = 0; i_17 < 19; i_17 += 3) 
            {
                for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
                {
                    {
                        arr_71 [i_11] [i_11] [i_12] [i_17] [i_18] [i_18] = min(((unsigned short)59186), (((/* implicit */unsigned short) (unsigned char)175)));
                        var_42 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) max((((/* implicit */signed char) arr_49 [i_17])), (var_8)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)46119)))))))));
                        arr_72 [i_11] [i_12] [i_17] [i_17] [i_17] [i_18 + 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_2))))))))));
                    }
                } 
            } 
            var_43 += ((/* implicit */signed char) max((((/* implicit */unsigned int) ((unsigned short) var_15))), (max((((/* implicit */unsigned int) var_16)), (arr_55 [i_11] [i_12] [i_11] [i_11] [i_12] [i_12 + 4])))));
            /* LoopNest 2 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (unsigned int i_20 = 0; i_20 < 19; i_20 += 1) 
                {
                    {
                        var_44 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_70 [i_11] [14] [i_19] [i_12 + 3]))));
                        arr_79 [i_20] [i_19] [i_19] [i_19] [1ULL] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_68 [i_12 - 2] [i_12 + 2] [i_12 + 2])) ? (arr_68 [i_12 + 2] [i_12 - 3] [i_12 + 4]) : (((/* implicit */long long int) -266242695))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_66 [i_11] [i_12] [i_19] [i_20]))))) ? (arr_53 [i_12 - 1] [i_12 + 1] [i_12 - 3] [4U]) : (((/* implicit */unsigned long long int) var_10))))));
                        arr_80 [i_11] [i_11] [i_19] [i_11] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (_Bool)0)), (1555927368U)));
                    }
                } 
            } 
        }
        for (long long int i_21 = 1; i_21 < 18; i_21 += 3) 
        {
            var_45 = ((/* implicit */unsigned short) (!(((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) >= (var_4)))));
            arr_85 [(unsigned char)2] [(unsigned char)2] = var_13;
            arr_86 [i_11] [i_21] = ((long long int) (+((+(arr_46 [i_21 - 1])))));
        }
        arr_87 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_67 [i_11] [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)126))) : (arr_67 [i_11] [i_11] [i_11] [(short)9] [i_11])))) / (((long long int) (+(((/* implicit */int) var_6)))))));
        var_46 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 5270475144568724313LL)) ? (((/* implicit */int) (short)7543)) : (((/* implicit */int) (unsigned char)211))));
        arr_88 [i_11] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_74 [14LL]))))));
    }
}
