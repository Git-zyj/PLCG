/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24364
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
    var_15 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_8))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (signed char)120))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_3])) ? (-4606351711275640236LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3])))))) + (((((/* implicit */_Bool) 6497949440492109604ULL)) ? (3042893846399347787ULL) : (9268450932398867473ULL))))) : (((unsigned long long int) ((((/* implicit */int) (unsigned short)60595)) != (((/* implicit */int) (unsigned short)15921)))))));
                        arr_10 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) 6497949440492109618ULL);
                        arr_11 [i_0] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) ((short) (+(6497949440492109604ULL)))))));
                    }
                    for (int i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        var_17 |= ((_Bool) ((unsigned int) 13649411368166396823ULL));
                        var_18 = ((/* implicit */unsigned char) arr_8 [i_0] [i_1] [i_1 - 2] [i_0] [i_1 - 2] [i_4]);
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (-(((8492880154256470404LL) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 1] [i_0] [i_1]))))))))));
                        var_20 = ((/* implicit */signed char) (_Bool)1);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        var_21 = (_Bool)1;
                        var_22 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) == ((-2147483647 - 1))));
                    }
                    arr_19 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((arr_13 [i_0] [i_1] [i_0] [i_0]) >> (((((((9178293141310684142ULL) + (((/* implicit */unsigned long long int) 0U)))) << (((((/* implicit */int) ((signed char) (unsigned char)246))) + (11))))) - (18356586282621368273ULL)))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (int i_7 = 0; i_7 < 14; i_7 += 3) 
    {
        arr_23 [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (signed char)-2))) - (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 44814062U)))) >= (((unsigned int) (short)31556)))))));
        var_23 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) ((unsigned char) 3689741971U))) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-46))) < (6915147870477730646ULL)))))));
    }
    for (unsigned short i_8 = 3; i_8 < 7; i_8 += 4) 
    {
        arr_27 [i_8] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)153))));
        arr_28 [i_8] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_8 [(unsigned char)11] [i_8] [(unsigned char)11] [i_8] [i_8 - 1] [i_8])) : (((/* implicit */int) (_Bool)1))))) - ((-(2991782563U))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_8]))))) && (((/* implicit */_Bool) (unsigned short)65535))))))));
    }
    for (unsigned int i_9 = 4; i_9 < 9; i_9 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned short)57511)))) >> (((arr_18 [i_9 - 4] [i_9] [i_9] [i_9] [i_9]) - (1765394948020717610LL)))));
        /* LoopSeq 3 */
        for (signed char i_10 = 0; i_10 < 10; i_10 += 4) 
        {
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (_Bool)0)) >> (((9268450932398867467ULL) - (9268450932398867460ULL))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((int) 9268450932398867472ULL))))) : (((((/* implicit */_Bool) ((-7570277342373037868LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((1076203433181560803LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)51))))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)54970))))))))))));
            var_26 = ((/* implicit */int) ((unsigned long long int) 6497949440492109604ULL));
            arr_35 [i_10] [i_9] = ((/* implicit */signed char) (+(4250153233U)));
        }
        for (unsigned short i_11 = 2; i_11 < 7; i_11 += 4) 
        {
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) arr_31 [i_9]))));
            arr_40 [i_9] [i_9] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_29 [i_11 - 1] [(_Bool)1]))));
        }
        for (unsigned short i_12 = 0; i_12 < 10; i_12 += 3) 
        {
            var_28 *= ((/* implicit */short) ((long long int) ((((484757447634834636LL) + (((/* implicit */long long int) 3220327486U)))) + (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 4250153233U)))))));
            var_29 = ((/* implicit */unsigned long long int) arr_1 [i_9]);
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) : (44814042U))))) % (((/* implicit */int) (unsigned char)252))));
            arr_43 [i_9 - 3] [i_9] [i_9 - 3] = ((/* implicit */short) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) 2672773158046805596LL)))) + (((906367963U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_9]))))))));
            var_31 = ((/* implicit */_Bool) max((var_31), (((_Bool) (short)-6))));
        }
        var_32 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_34 [i_9 - 4] [i_9 + 1])))) / (9223372036854775807LL)));
        /* LoopNest 3 */
        for (unsigned char i_13 = 1; i_13 < 7; i_13 += 3) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 4) 
            {
                for (unsigned int i_15 = 2; i_15 < 8; i_15 += 4) 
                {
                    {
                        var_33 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-21217)) / (1427886727)))) || (((/* implicit */_Bool) (+(6469692695729609383ULL)))))))) & (((unsigned int) arr_5 [i_9 - 4] [i_9] [i_13 + 2]))));
                        /* LoopSeq 1 */
                        for (unsigned char i_16 = 1; i_16 < 7; i_16 += 3) 
                        {
                            arr_52 [i_9] [i_16] = ((/* implicit */long long int) ((((44814062U) & (((/* implicit */unsigned int) ((/* implicit */int) (short)17893))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)226))))) ? (((/* implicit */int) (unsigned char)30)) : (((((/* implicit */int) arr_26 [i_16])) | (((/* implicit */int) arr_42 [i_15] [i_13])))))))));
                            arr_53 [i_9] [i_16] [i_14] [i_9] [i_16] = ((/* implicit */_Bool) ((((long long int) arr_8 [8U] [i_16] [i_13 - 1] [i_9 - 1] [i_16 - 1] [i_9 - 2])) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)12830))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_17 = 4; i_17 < 9; i_17 += 2) /* same iter space */
    {
        var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((signed char) ((unsigned long long int) 606178650727233246LL))))));
        arr_58 [i_17] [i_17 + 1] = ((/* implicit */int) ((unsigned int) ((((unsigned long long int) 1427886727)) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_49 [i_17] [i_17] [i_17] [i_17 - 3])) & (((/* implicit */int) arr_9 [i_17] [8LL] [i_17] [i_17]))))))));
        var_35 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))) > (3761208254U)))) >> (((2660706363045307533ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)79))))))));
    }
}
