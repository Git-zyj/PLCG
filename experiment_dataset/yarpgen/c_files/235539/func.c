/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235539
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
    for (int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)72))) : (((var_12) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)47))))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_1)) ? (-1059617417) : (((/* implicit */int) (signed char)-23)))) + (max((-806979105), (((/* implicit */int) (_Bool)0)))))) - (((/* implicit */int) (signed char)-20))));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_20 = ((/* implicit */_Bool) -5761757902579420089LL);
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            arr_11 [i_1] [i_1] [(_Bool)1] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) ((int) -1059617403))))))));
            arr_12 [i_1] [i_1] [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))), (var_13)));
        }
        arr_13 [i_1] = ((/* implicit */signed char) max((((/* implicit */int) var_18)), (((((/* implicit */int) ((_Bool) (_Bool)0))) << (((((int) var_15)) + (223609364)))))));
        arr_14 [(unsigned char)6] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_4 [i_1]), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) arr_9 [i_1])), ((unsigned char)137))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_6 [4LL])), (var_15)))) ? ((~(((/* implicit */int) (unsigned char)147)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)248)) || (var_5)))))))));
        var_21 = ((/* implicit */unsigned char) arr_7 [i_1]);
    }
    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        var_22 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_16 [i_3])) : (((/* implicit */int) (_Bool)0)))) | ((((_Bool)0) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) (signed char)12))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_3] [15])) ? (((((/* implicit */_Bool) arr_0 [i_3] [i_3])) ? (((/* implicit */int) var_16)) : (-806979105))) : (min((((/* implicit */int) arr_1 [i_3] [i_3])), (-16)))))) : (min((((((/* implicit */long long int) ((/* implicit */int) (signed char)-112))) + (var_12))), (((/* implicit */long long int) min((1059617416), (-1623960030)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */_Bool) var_11);
            var_24 += ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)23)) ^ (((/* implicit */int) arr_17 [i_3]))));
        }
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_27 [i_5] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5]))) & (arr_20 [i_5])))) ? (((/* implicit */int) (unsigned char)108)) : (((/* implicit */int) var_5)))) << (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)118))))) && (((/* implicit */_Bool) (signed char)85)))))));
                arr_28 [i_5] [6LL] [6LL] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((((/* implicit */int) ((signed char) 9223372036854775807LL))) + (2147483647))) << (((((/* implicit */int) ((signed char) 2730302318U))) - (110)))))), (((((/* implicit */_Bool) ((arr_26 [i_6] [i_5] [i_6] [i_5]) ? (var_14) : (arr_20 [i_5])))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3] [i_5]))) : (-5768832194425055527LL))) : (((/* implicit */long long int) ((unsigned int) arr_24 [7U] [i_3] [i_3] [i_6])))))));
                var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned int) (signed char)127)), (var_10)))))));
            }
            for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
            {
                var_26 ^= ((/* implicit */_Bool) min((((/* implicit */long long int) 1623960030)), (((long long int) ((unsigned char) arr_1 [i_3] [6U])))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    var_27 -= ((/* implicit */_Bool) 8450655019347542272LL);
                    var_28 = ((/* implicit */int) ((signed char) 806979104));
                    var_29 = ((signed char) arr_35 [i_3] [i_3] [(signed char)9] [i_3]);
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    arr_38 [i_3] [i_5] = ((((/* implicit */_Bool) min((arr_25 [i_5] [i_5]), (((/* implicit */unsigned int) -85156994))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_3]))) : ((-(2593354504U))));
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        arr_43 [i_10 - 1] [i_5] [i_7] [i_5] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) var_2))));
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_39 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10] [i_10 - 1] [i_7]))))) ? (((var_7) * (((/* implicit */int) var_2)))) : (max((((/* implicit */int) ((signed char) 9223371968135299072LL))), (-172725005)))));
                    }
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_5] [i_11])) ? (((/* implicit */int) arr_37 [i_3] [i_5] [i_3] [i_9])) : (((/* implicit */int) arr_39 [i_11] [i_9] [i_7] [i_7] [i_5] [i_3] [i_3]))))) ? ((~(((/* implicit */int) (signed char)-32)))) : (((var_16) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)(-127 - 1)))))))), (((arr_40 [i_7] [10U] [(signed char)5] [i_11 - 1] [i_11] [i_11]) + (arr_40 [i_7] [i_11] [i_11] [i_11 - 1] [i_11] [i_7])))));
                        arr_46 [i_3] [i_3] [i_3] [i_9] [i_11] [i_5] = ((/* implicit */int) (((!(((/* implicit */_Bool) var_19)))) ? (((/* implicit */long long int) (~((~(((/* implicit */int) (signed char)(-127 - 1)))))))) : (var_12)));
                        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) var_9))));
                        arr_47 [i_3] [0U] [i_5] [i_9] [i_11 - 1] = ((/* implicit */unsigned int) ((_Bool) max((arr_42 [i_11 - 1] [i_11 - 1] [i_11] [i_11 - 1] [i_11 - 1]), (((/* implicit */unsigned char) (signed char)-29)))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_33 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned char) var_16)), (((unsigned char) arr_22 [i_7] [i_5])))), (((/* implicit */unsigned char) arr_17 [i_3]))));
                        var_34 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_22 [i_7] [i_3])) < (((/* implicit */int) arr_22 [i_9] [i_12])))))));
                        arr_50 [i_12] [i_5] [i_7] [i_5] [i_3] = ((/* implicit */unsigned int) arr_15 [i_9]);
                    }
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    var_35 ^= ((/* implicit */int) ((_Bool) 539085485U));
                    var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((((int) arr_42 [i_3] [i_3] [i_3] [(signed char)2] [i_3])) | (((((/* implicit */int) arr_42 [i_13] [i_5] [i_7] [i_5] [i_3])) | (((/* implicit */int) arr_42 [i_7] [i_7] [i_7] [i_13] [i_13])))))))));
                    arr_54 [i_3] [i_5] [i_5] [14] = ((/* implicit */signed char) (~(((max((var_10), (((/* implicit */unsigned int) var_8)))) >> ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (0LL)))))));
                }
                var_37 ^= ((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */int) arr_23 [i_3] [i_3])) : (((/* implicit */int) (signed char)(-127 - 1)))))));
                var_38 &= ((/* implicit */long long int) 4294967278U);
            }
            for (unsigned char i_14 = 0; i_14 < 16; i_14 += 3) /* same iter space */
            {
                var_39 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) ((_Bool) var_0)))));
                var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (((((((/* implicit */int) (signed char)127)) == (((/* implicit */int) (signed char)-32)))) ? (((var_14) ^ (((/* implicit */long long int) arr_40 [i_3] [(unsigned char)6] [(unsigned char)6] [i_3] [i_14] [i_14])))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)36)))))));
                arr_57 [i_14] [i_5] [i_14] [i_14] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) max((0LL), (((/* implicit */long long int) 0U))))) ? (((/* implicit */unsigned int) var_6)) : (arr_40 [i_3] [i_3] [i_14] [i_5] [i_5] [i_3])))));
            }
            var_41 = ((/* implicit */unsigned char) max((((/* implicit */int) (signed char)-44)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (2593354504U)))) ? (((/* implicit */int) arr_42 [i_3] [14] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_26 [i_3] [0U] [i_5] [i_5]))))));
            arr_58 [i_5] [i_3] [i_3] |= max((((arr_32 [(signed char)1] [i_3] [i_5] [i_5] [i_5] [i_5]) ? (((/* implicit */int) max((var_4), (((/* implicit */signed char) var_5))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)8)) || (var_0)))))), (((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */int) arr_33 [i_5] [i_5] [i_5] [i_3])) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_42 [i_3] [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_16 [i_3])))))));
        }
        arr_59 [i_3] [(_Bool)0] = ((/* implicit */signed char) min((arr_19 [(signed char)10]), (((/* implicit */int) (unsigned char)82))));
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 16; i_15 += 1) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (long long int i_17 = 0; i_17 < 16; i_17 += 4) 
                {
                    {
                        var_42 = ((/* implicit */signed char) max((((arr_34 [7] [i_15] [i_16] [i_17] [i_17] [i_15]) + (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_3] [i_3] [i_16] [i_3]))))), (((/* implicit */long long int) var_8))));
                        var_43 = (unsigned char)5;
                        arr_69 [i_15] = max((((/* implicit */int) arr_39 [i_3] [i_3] [i_15] [i_16] [i_16] [i_3] [i_17])), (0));
                    }
                } 
            } 
        } 
    }
    var_44 = ((unsigned int) (((-(((/* implicit */int) (unsigned char)87)))) / (((((/* implicit */int) var_1)) * (((/* implicit */int) (signed char)(-127 - 1)))))));
    /* LoopSeq 1 */
    for (unsigned char i_18 = 0; i_18 < 12; i_18 += 4) 
    {
        var_45 = ((/* implicit */_Bool) min((var_45), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) arr_31 [i_18] [(unsigned char)9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)57))) : (var_17))) : (((/* implicit */unsigned int) ((var_9) ? (var_6) : (((/* implicit */int) (signed char)0)))))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 11LL)) && (((/* implicit */_Bool) arr_72 [i_18])))) ? (((/* implicit */int) var_19)) : (((((/* implicit */_Bool) -1611040793121251338LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_63 [i_18] [i_18]))))))) : (((((2593354504U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)116))))) ? (((/* implicit */unsigned int) arr_55 [i_18] [i_18] [i_18])) : (((((/* implicit */_Bool) var_15)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))))));
        /* LoopSeq 2 */
        for (unsigned int i_19 = 0; i_19 < 12; i_19 += 1) 
        {
            arr_76 [i_18] [i_19] = ((int) (-(((var_17) / (((/* implicit */unsigned int) ((/* implicit */int) arr_66 [i_18] [i_18] [i_19] [i_19])))))));
            arr_77 [i_18] [i_19] = ((/* implicit */signed char) var_10);
        }
        for (long long int i_20 = 1; i_20 < 9; i_20 += 4) 
        {
            var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)108))) % (arr_64 [i_20] [i_20] [i_18])))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_35 [i_20] [i_20 - 1] [i_18] [i_18])))) == (((/* implicit */int) var_5)))))));
            var_47 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_61 [i_18]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (unsigned char)237))))) : ((-(((7268820502566975624LL) + (((/* implicit */long long int) 1701612786U))))))));
            var_48 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)3))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)48))) : (min((var_11), (((/* implicit */long long int) (signed char)69))))))) ? (((/* implicit */unsigned int) ((((var_6) + (2147483647))) >> (((((/* implicit */int) (unsigned char)255)) - (228)))))) : (arr_24 [i_18] [i_18] [i_18] [(_Bool)1])));
            /* LoopSeq 1 */
            for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
            {
                arr_82 [i_21] [i_20 + 2] [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (unsigned char)255))) ? (((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */long long int) 1U)) : (-5152692812127583588LL))) : (((/* implicit */long long int) min((arr_40 [i_21] [i_21] [i_21] [i_18] [i_18] [i_18]), (((/* implicit */unsigned int) (unsigned char)139)))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) >= (min((var_13), (((/* implicit */unsigned int) var_18))))))) : (((/* implicit */int) ((signed char) arr_35 [i_18] [i_20] [i_18] [i_21])))));
                var_49 = ((/* implicit */_Bool) (~(max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_4)))), (((/* implicit */int) arr_49 [i_20 + 1] [i_20] [i_18] [i_18] [i_18]))))));
            }
        }
        var_50 ^= ((/* implicit */long long int) ((unsigned int) min(((unsigned char)255), (((/* implicit */unsigned char) arr_32 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18])))));
    }
    var_51 = ((/* implicit */int) ((((/* implicit */_Bool) 1221257264)) ? (((/* implicit */long long int) max(((~(var_17))), (4294967284U)))) : (((((/* implicit */_Bool) ((var_9) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_14)))));
    var_52 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_1))))));
}
