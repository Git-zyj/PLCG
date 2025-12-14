/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219029
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */signed char) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) % (9ULL))) << (((((((/* implicit */_Bool) (short)25197)) ? (6055459236715249001LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))) - (6055459236715248973LL))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */int) (signed char)-98)) <= (((/* implicit */int) (short)(-32767 - 1)))))), (arr_3 [i_0])))))));
        var_12 -= ((/* implicit */unsigned long long int) max(((short)0), (((/* implicit */short) (signed char)6))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */int) arr_3 [i_0])) + (((/* implicit */int) arr_3 [i_0])))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 4; i_1 < 8; i_1 += 4) 
        {
            arr_8 [9LL] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_2 [i_1 + 3] [i_1 + 3]))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) | (var_9))))));
            arr_9 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_1 + 2])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (short)-24500)))) <= ((~(((/* implicit */int) arr_3 [i_0]))))));
        }
        var_13 *= ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_1 [i_0])))) - (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) (short)-4)))))));
    }
    for (signed char i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
    {
        arr_13 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(2249337178326573183ULL)))) ? (2249337178326573183ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)82))) % ((-9223372036854775807LL - 1LL)))))));
        var_14 = ((/* implicit */long long int) (signed char)109);
    }
    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) var_8))));
        var_16 = ((/* implicit */signed char) max(((short)-9095), (((/* implicit */short) ((signed char) arr_15 [i_3])))));
        var_17 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)0))));
        arr_16 [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_14 [i_3] [i_3])), (var_2))))));
        arr_17 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_3] [i_3])) ? (((((/* implicit */_Bool) arr_14 [i_3] [i_3])) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) (signed char)-10)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)2)) > (((/* implicit */int) arr_14 [(short)2] [i_3])))))));
    }
    var_18 = ((/* implicit */short) var_4);
    /* LoopSeq 2 */
    for (long long int i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 2) 
                {
                    {
                        var_19 = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) ((6055459236715249001LL) < (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))))) | (0ULL)))));
                        arr_27 [i_7] = ((/* implicit */short) arr_25 [i_4] [i_5] [i_4] [i_7]);
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_6))))), (((8115367410588055392ULL) >> (((/* implicit */int) (short)15))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)12)), (arr_19 [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_21 [i_4]))))) : (((((/* implicit */_Bool) (short)-23874)) ? (5694068687701073238ULL) : (4000372907118742951ULL))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [i_7 - 1] [i_7 - 1]))))))))));
                        var_21 = ((/* implicit */short) (signed char)0);
                    }
                } 
            } 
        } 
        var_22 ^= ((/* implicit */long long int) ((min((((((/* implicit */_Bool) (signed char)10)) ? (arr_24 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)62))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (short)-1))))))) - (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_4] [i_4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)120))))), (((((/* implicit */_Bool) arr_26 [i_4] [(signed char)7] [i_4] [i_4] [(signed char)7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64))) : (var_1)))))));
        /* LoopSeq 4 */
        for (short i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            var_23 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_24 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2))) : (((arr_29 [i_4] [10LL]) >> (((10331376663121496249ULL) - (10331376663121496192ULL))))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)95)))))));
            var_24 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == (arr_25 [i_4] [i_4] [i_4] [i_4])))))) == (((((/* implicit */_Bool) ((unsigned long long int) (signed char)-29))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-62)) + (2147483647))) << (((((/* implicit */int) (signed char)2)) - (2)))))) : (max((arr_24 [i_4]), (((/* implicit */unsigned long long int) arr_21 [i_4]))))))));
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)49)) - (((/* implicit */int) (short)-5))))) - (((((/* implicit */_Bool) arr_26 [i_4] [i_8] [i_8] [i_8] [i_8])) ? (var_9) : (27021597764222976ULL)))))) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-3)) < (((/* implicit */int) (signed char)-7))))) == (((/* implicit */int) min((var_6), (arr_21 [i_8]))))))))))));
        }
        for (signed char i_9 = 1; i_9 < 20; i_9 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_10 = 4; i_10 < 21; i_10 += 1) 
            {
                var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-27))))), (((((/* implicit */_Bool) (signed char)4)) ? (arr_29 [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-7)))))))))))));
                /* LoopSeq 3 */
                for (long long int i_11 = 2; i_11 < 21; i_11 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_12 = 0; i_12 < 22; i_12 += 4) 
                    {
                        arr_41 [i_9] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_9 + 2])) ? (arr_32 [i_9 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))));
                        arr_42 [i_4] [i_4] [i_10] [i_10] [i_9] [i_10] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-74))) < (arr_24 [i_4])));
                        arr_43 [i_4] [i_4] [(signed char)14] [i_4] [i_9] = ((/* implicit */long long int) arr_36 [i_9] [i_9] [i_10] [i_11] [i_11]);
                        var_27 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-59)) : (((/* implicit */int) (signed char)64))))) ? (((/* implicit */int) arr_38 [i_11 - 2] [i_10] [i_4] [i_10 - 2] [i_11 - 2] [i_12])) : (((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) arr_22 [i_11] [i_11] [i_11])))))));
                    }
                    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((((/* implicit */_Bool) min((arr_23 [i_4] [i_9]), (((/* implicit */long long int) (signed char)6))))) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32759)) ? (((/* implicit */int) arr_22 [i_4] [i_4] [10ULL])) : (((/* implicit */int) var_5))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) & (((((/* implicit */int) (signed char)-31)) ^ (((/* implicit */int) (signed char)-95))))))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_13 = 0; i_13 < 22; i_13 += 3) 
                    {
                        var_29 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-29))))) == (arr_25 [i_4] [i_4] [i_10 - 1] [i_11])));
                        arr_46 [i_11] [i_11] [i_10] [i_9] [i_9] = ((/* implicit */short) ((var_9) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                        arr_47 [i_9] [i_9 - 1] [i_9 - 1] [i_9] [i_9] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_38 [i_4] [i_9 - 1] [i_9] [i_4] [i_9 - 1] [i_9]))));
                        arr_48 [i_4] [i_9] [i_4] [i_11] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) 15771707461834435488ULL)) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                        var_30 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_11] [i_10] [i_10] [i_10] [i_10] [i_10] [i_11])) && (((((/* implicit */_Bool) (signed char)-4)) && (((/* implicit */_Bool) var_2))))));
                    }
                    for (unsigned long long int i_14 = 2; i_14 < 20; i_14 += 4) 
                    {
                        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) min((arr_34 [i_11] [i_14]), ((signed char)7)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) -7173185082745140308LL)))))))) << (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24617)) ? (((/* implicit */int) (short)24617)) : (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_4] [(short)10] [(signed char)19] [i_4] [i_14 + 2])) ? (((/* implicit */int) (signed char)-21)) : (((/* implicit */int) (short)24617)))))))))))));
                        var_32 -= ((/* implicit */signed char) ((min((arr_19 [i_9 + 1] [i_10 - 3]), (((/* implicit */unsigned long long int) (signed char)28)))) == (((((/* implicit */_Bool) arr_25 [i_10 + 1] [i_10 + 1] [i_11 - 2] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_9] [i_9]))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-12))) : (var_9)))))));
                        arr_51 [i_4] [i_9] [i_10 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_9 - 1] [i_11 - 2])) ? (((/* implicit */int) arr_18 [i_9 + 1] [i_11 - 2])) : (((/* implicit */int) arr_18 [i_9 - 1] [i_11 + 1]))))) ? (((/* implicit */int) min(((short)24617), (((/* implicit */short) arr_18 [i_9 - 1] [i_11 - 1]))))) : (((/* implicit */int) ((((/* implicit */int) arr_18 [i_9 + 2] [i_11 - 1])) == (((/* implicit */int) arr_18 [i_9 + 1] [i_11 - 1])))))));
                        var_33 = ((/* implicit */unsigned long long int) (signed char)-11);
                        arr_52 [i_10] [i_9] [i_10] [i_10 - 3] [i_10 - 2] [i_10] [(signed char)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-60)), ((~(((/* implicit */int) (signed char)0))))))) || (((/* implicit */_Bool) ((long long int) ((2675036611875116127ULL) <= (((/* implicit */unsigned long long int) arr_23 [(short)11] [(short)11]))))))));
                    }
                    for (signed char i_15 = 1; i_15 < 19; i_15 += 2) /* same iter space */
                    {
                        arr_55 [i_4] [i_4] [i_4] [i_9] [i_4] [i_4] = ((/* implicit */signed char) ((long long int) 15771707461834435469ULL));
                        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) max((((/* implicit */int) ((signed char) arr_34 [6ULL] [6ULL]))), ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_4] [i_4] [i_4] [i_4] [i_15] [i_4] [i_4])) && (((/* implicit */_Bool) arr_29 [i_4] [i_4]))))))))))));
                    }
                    /* vectorizable */
                    for (signed char i_16 = 1; i_16 < 19; i_16 += 2) /* same iter space */
                    {
                        var_35 *= ((/* implicit */signed char) ((((/* implicit */int) arr_34 [i_9 + 1] [i_9 + 1])) + (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_4] [i_10] [i_4])) && (((/* implicit */_Bool) (signed char)-82)))))));
                        var_36 = ((/* implicit */short) (~(((((/* implicit */_Bool) 1263575080667093555LL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)-32))))));
                        var_37 = ((/* implicit */long long int) (((-(((/* implicit */int) (signed char)44)))) < (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-3))))));
                    }
                    var_38 = ((/* implicit */short) arr_39 [i_4] [i_4] [i_9] [i_9] [i_10 - 4] [(short)13] [i_9]);
                }
                /* vectorizable */
                for (signed char i_17 = 1; i_17 < 21; i_17 += 2) 
                {
                    var_39 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)48)) && (((/* implicit */_Bool) arr_25 [i_17] [i_17 - 1] [i_17 - 1] [i_4]))));
                    arr_62 [i_17] [i_9] [i_10 - 4] [(signed char)19] [i_9] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_53 [(signed char)7] [(signed char)7] [(signed char)7] [i_10] [i_17 + 1]) * (133169152ULL)))) ? (((/* implicit */int) arr_61 [i_10] [i_10 + 1] [i_17 + 1] [i_10])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18647))) <= (2675036611875116127ULL))))));
                }
                for (signed char i_18 = 0; i_18 < 22; i_18 += 1) 
                {
                    arr_66 [13ULL] [i_9] [i_9] [i_4] = arr_58 [i_9] [i_9] [i_9];
                    arr_67 [i_4] [i_9] [(signed char)21] [i_4] [i_4] = ((/* implicit */signed char) ((min((max((10391495898419368393ULL), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) max(((short)-24618), ((short)24617)))))) ^ (var_1)));
                    arr_68 [i_4] [i_9] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_57 [(short)8] [(short)8] [i_9 + 2] [i_9 + 2] [i_9] [i_10 - 4]), (arr_57 [i_4] [i_4] [i_9 + 2] [i_4] [i_4] [i_10 - 4])))) ? (max((((/* implicit */unsigned long long int) arr_30 [i_9] [i_9] [i_18])), (((0ULL) << (((arr_32 [i_9]) - (9863509309522331506ULL))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-14309)) / (((/* implicit */int) (short)-2050))))) ? (((/* implicit */int) (short)4707)) : (((/* implicit */int) arr_22 [i_4] [i_4] [i_4])))))));
                    arr_69 [i_4] [i_4] [i_4] [i_18] [i_18] [i_4] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((8659507904401883418LL) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_59 [i_4] [(short)13] [i_10] [i_18] [i_4])) : (((/* implicit */int) (short)-2063))))))))));
                }
            }
            var_40 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-14230)) : (((/* implicit */int) (short)-2063))))) : ((-(arr_29 [i_4] [i_4]))))));
        }
        for (short i_19 = 4; i_19 < 20; i_19 += 3) 
        {
            var_41 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_19 + 1] [i_19 - 4] [i_19 - 4]))) | (18446744073709551596ULL))))));
            var_42 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)21220))) * (0ULL)))))) ? (((long long int) (~(((/* implicit */int) arr_33 [i_4] [i_4] [i_4]))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-107)))));
            var_43 |= ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
            var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) var_7)))))) ? (min((((/* implicit */int) ((((/* implicit */int) (signed char)-32)) > (((/* implicit */int) (short)-14309))))), (((((/* implicit */int) var_8)) << (((((/* implicit */int) (signed char)127)) - (105))))))) : (((((/* implicit */int) ((var_9) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_4] [i_4] [i_4] [i_19] [i_19] [i_4])))))) - (((((/* implicit */int) var_7)) - (((/* implicit */int) arr_56 [i_19 - 4] [i_19 - 4])))))))))));
        }
        /* vectorizable */
        for (signed char i_20 = 0; i_20 < 22; i_20 += 4) 
        {
            var_45 = ((/* implicit */short) ((((/* implicit */long long int) (+(((/* implicit */int) arr_54 [i_4] [i_4]))))) + (var_2)));
            var_46 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)-28442))) & (arr_58 [i_4] [i_20] [i_4])));
        }
        var_47 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 18446744073709551608ULL)) ? (arr_58 [i_4] [i_4] [i_4]) : (7966903559018658779LL))) - (((/* implicit */long long int) ((/* implicit */int) (signed char)33)))))) ? (min((arr_19 [(short)0] [i_4]), (((/* implicit */unsigned long long int) ((((-8797400219028157908LL) + (9223372036854775807LL))) << (((var_2) - (5057584667173835158LL)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_4] [i_4] [i_4])) ? (((/* implicit */int) (short)14301)) : (((((/* implicit */_Bool) arr_70 [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_39 [i_4] [i_4] [i_4] [(signed char)10] [i_4] [10LL] [i_4])) : (((/* implicit */int) var_8))))))));
    }
    for (long long int i_21 = 0; i_21 < 22; i_21 += 4) /* same iter space */
    {
        var_48 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)0)), (arr_32 [i_21]))))))) >> (((((((/* implicit */_Bool) (short)11031)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)13935))) % (556246331493629405LL)))) : (10964570895197414451ULL))) - (13906ULL)))));
        arr_77 [(signed char)2] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_21] [i_21] [i_21]))))) % (((((/* implicit */int) var_8)) | (((/* implicit */int) (short)32347))))));
    }
    var_49 = ((/* implicit */long long int) max((3641152499844986846ULL), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (0LL)))))));
}
